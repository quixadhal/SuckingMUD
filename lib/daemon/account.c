/* vim:set ft=lpc: */

#include <globals.h>

mapping accounts = ([]);

void create()
{
    if(file_exists(ACCOUNT_DATA)) {
        restore_object(ACCOUNT_DATA);
    }
    save_object(ACCOUNT_DATA);
}

int account_exists(string account)
{
    //if(file_name(previous_object()) == LOGIN_OB) {
    if(member_array(account, keys(accounts)) != -1) {
        return 1;
    }
    //}
    return 0;
}

int number_of_accounts()
{
    return sizeof(keys(accounts));
}

int valid_account_name(string name) {
    if(!name)
        return 0;

    if(strlen(name) < 3)
        return 0;

    if(strlen(name) > 16)
        return 0;

    if(regexp(name, "[^a-zA-Z0-9]"))
        return 0;

    return 1;
}

string normalize_account_name(string name) {
    return capitalize(lower_case(name));
}

int valid_password(string password) {
    if(!password)
        return 0;

    if(strlen(password) < 6)
        return 0;

    return 1;
}

int password_match(string name, string password) {
    if(account_exists(name)) {
        if(crypt(password, name) == accounts[name]["password"]) {
            return 1;
        }
    }
    return 0;
}

int valid_email(string email) {
    if(!email)
        return 0;

    if(strlen(email) < 8)
        return 0;

    if(regexp(email, "^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9._%+-]+\\.[a-zA-Z]+$"))
        return 1;
    
    return 0;
}

void create_account(string name, string password, string email) {
    int firstWizard = 0;

    if(number_of_accounts() < 1)
        firstWizard = 1;

    if(!account_exists(name)) {
        accounts[name] = ([]);
    }
    accounts[name]["password"] = crypt(password, name);
    accounts[name]["email"] = email;
    accounts[name]["wizard"] = firstWizard;
    accounts[name]["date created"] = time();
    accounts[name]["last login"] = accounts[name]["date created"];
    accounts[name]["last logout"] = 0;
    accounts[name]["time played"] = 0;
    save_object(ACCOUNT_DATA);

    if(firstWizard)
        write("\nCongrats!  As the first login, " + name + " is now a wizard!\n");
}

void set_login(string name) {
    if(!account_exists(name))
        return;

    accounts[name]["last login"] = time();
    save_object(ACCOUNT_DATA);
}

void set_logout(string name) {
    if(!account_exists(name))
        return;

    accounts[name]["last logout"] = time();
    accounts[name]["total played"] += ( accounts[name]["last logout"] - accounts[name]["last login"] );
    save_object(ACCOUNT_DATA);
}

void set_wizard(string name, int enabled) {
    if(!account_exists(name))
        return;

    accounts[name]["wizard"] = enabled;
    save_object(ACCOUNT_DATA);
}

void set_password(string name, string password) {
    if(!account_exists(name))
        return;

    accounts[name]["password"] = crypt(password, name);
    save_object(ACCOUNT_DATA);
}

void set_email(string name, string email) {
    if(!account_exists(name))
        return;

    accounts[name]["email"] = email;
    save_object(ACCOUNT_DATA);
}

void set_offline(string name) {
    if(!account_exists(name))
        return;

    accounts[name]["online"] = 0;
    accounts[name]["last logout"] = time();
    accounts[name]["total played"] += ( accounts[name]["last logout"] - accounts[name]["last login"] );
    save_object(ACCOUNT_DATA);
}

void set_online(string name) {
    if(!account_exists(name))
        return;

    accounts[name]["online"] = 1;
    accounts[name]["last login"] = time();
    save_object(ACCOUNT_DATA);
}

