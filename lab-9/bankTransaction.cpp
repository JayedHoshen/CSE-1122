/*
Problem-2: Create a class BankAccount representing a bank account with private members balance, accountNumber, and customerName. Implement a friend function 
transferFunds() that takes two BankAccount objects as arguments and transfers 
funds from one account to another. Also, make another class BankManager a 
friend of BankAccount class, which can access the accountNumber and 
customerName of any BankAccount object. Test your program by creating 
multiple bank accounts, transferring funds between them, and displaying account 
information using the BankManager class.  

Submitted by Jayed Hoshen (DUET-CSE, id: 2204076)
*/

#include <bits/stdc++.h>
using namespace std;

class BankManager;

class BankAccount {
    double balance;
    int accountNumber;
    string customerName;
public:
    BankAccount(double bal, int accNum, string name) {
        balance = bal;
        accountNumber = accNum;
        customerName = name;
    }
    friend void transferFunds(BankAccount& fromAccount, BankAccount& toAccount);
    friend class BankManager;
};

void transferFunds(BankAccount &fromAccount, BankAccount &toAccount) {
    double amount;
    cout << "Enter the amount to transfer from " << fromAccount.customerName << " to " << toAccount.customerName << ": ";
    cin >> amount;

    if (amount > 0 && amount <= fromAccount.balance) {
        fromAccount.balance -= amount;
        toAccount.balance += amount;
        cout << "\nWell! Transfer successful.\n";
    } else {
        cout << "\nOh! Invalid amount or insufficient balance.\n";
    }
}

class BankManager {
public:
    void displayAccountInfo(BankAccount &account) {
        cout << "Account Number: " << account.accountNumber << endl;
        cout << "Customer Name: " << account.customerName << endl;
        cout << "Balance: $" << account.balance << endl << endl;
    }
};

int main() {
    cout << "\n==============This is Jayed Hoshen's Programm=============\n\n";

    // =================Input section=============
    int customerID1, customerID2; 
    double customerBalance1, customerBalance2;
    char customerName1[1000000], customerName2[1000000];

    cout << "Please enter First Account Name = "; scanf(" %[^\n]", customerName1);
    cout << "Please enter first Account number = "; cin >> customerID1;
    cout << "Please enter first Account Balance = "; cin >> customerBalance1;

    cout << "\nPlease enter Second Account Name = "; scanf(" %[^\n]", customerName2);
    cout << "Please enter second Account number = "; cin >> customerID2;
    cout << "Please enter Second Account Balance = "; cin >> customerBalance2;

    // ============= object create and assign their value ============ 
    BankAccount account1(customerBalance1, customerID1, customerName1);
    BankAccount account2(customerBalance2, customerID2, customerName2);
    BankManager manager;

    cout << "\n----------->Before transfer<-------------\n";
    manager.displayAccountInfo(account1);
    manager.displayAccountInfo(account2);

    transferFunds(account1, account2);

    cout << "\n------------------>After transfer<-------------\n";
    manager.displayAccountInfo(account1);
    manager.displayAccountInfo(account2);

    cout << "===========}-Submitted Successfully, Thank you Sir/Mam-{===========\n";

    return 0;
}