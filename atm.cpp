#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

class atm {
    long int account_No;
    string name;
    int PIN;
    double balance;
    string mobile_No;

public:
    void setData(long int account_No_a, string name_a, int PIN_a, double balance_a, string mobile_No_a) {
        account_No = account_No_a;
        name = name_a;
        PIN = PIN_a;
        balance = balance_a;
        mobile_No = mobile_No_a;
    }


    // get all value
    long int getAccountNo() {
        return account_No;
    }

    string getName() {
        return name;
    }

    int getPIN() {
        return PIN;
    }

    double getBalance() {
        return balance;
    }

    string getMobileNo() {
        return mobile_No;
    }

    // update mobile no
    void setMobile(string mob_prev, string mob_new) {
        if(mob_prev == mobile_No) {
            mobile_No = mob_new;
            cout << "Successfully Updated Mobile no.\n";
            _getch();
        }
        else {
            cout << "Incorrect!!! Old Mobile no\n";
            _getch();
        }
    }

    // cashWithDraw 
    void cashWithDraw(int amount_a) {
        if(amount_a > 0 && amount_a < balance) {
            balance -= amount_a;
            cout << "Please Collect Your Cash\n";
            cout << "Available Balance: " << balance << endl;
            _getch();
        }
        else {
            cout << "Invalid Input or Insufficient Balance\n";
            _getch();
        }
    }
};

int main() 
{   
    int choice = 0, enterPIN;
    long int enterAccountNo;
    
    system("cls");

    // setting default data
    atm user1;
    user1.setData(12345, "Jayed", 1122, 50000.22, "1987375377");

    do{
        system("cls");

        cout << "\n====>*****Welcome to ATM*****>=====\n";
        cout << "Enter Your Account No = ";
        cin >> enterAccountNo;

        cout << "Enter PIN = ";
        cin >> enterPIN;
        
        if((enterAccountNo == user1.getAccountNo()) && (enterPIN == user1.getPIN())) {
            do{
                int amount = 0;
                string oldMobileNo, newMobileNo;

                system("cls");
                cout << "\n====>*****Welcome to ATM*****>=====\n";
                cout << "Select Options\n";
                cout << "1. Check Balance\n";
                cout << "2. Cash Withdraw\n";
                cout << "3. Show User Details\n";
                cout << "4. Update Mobile no\n";
                cout << "5. Exit\n";
                cin >> choice;

                switch(choice) {
                    case 1:
                        cout << "Your Bank balance is: " << user1.getBalance();
                        _getch();
                        break;
                    case 2:
                        cout << "Enter the amount = ";
                        cin >> amount;
                        user1.cashWithDraw(amount);
                        break;

                    case 3:
                        cout << "****User Details are =>--\n";
                        cout << "Account no = " << user1.getAccountNo() << endl;
                        cout << "Name = " << user1.getName() << endl;
                        cout << "Balance = " << user1.getBalance() << endl;
                        cout << "Mobile No. = " << user1.getMobileNo() << endl;
                        _getch();
                        break;
                    case 4:
                        cout << "Enter old Mobile No = ";
                        cin >> oldMobileNo;

                        cout << "Enter New Mobile No = ";
                        cin >> newMobileNo;

                        user1.setMobile(oldMobileNo, newMobileNo);
                        break;

                    case 5: 
                        exit(0);
                    default:
                        cout << "Enter valid Data!!!\n";
                }
                
            } while(1);
        }

        else {
            cout << "User Details are Invalid!!!\n";
            _getch();
        }
    } while(1);

    return 0;
}