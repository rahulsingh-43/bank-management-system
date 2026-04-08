#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Transaction Class
class Transaction {
public:
    string type;
    float amount;
    string date;

    Transaction(string t, float a, string d) {
        type = t;
        amount = a;
        date = d;
    }
};

// Account Class
class Account {
public:
    int accNumber;
    float balance;
    vector<Transaction> transactions;

    Account(int num) {
        accNumber = num;
        balance = 0;
    }

    void deposit(float amount) {
        balance += amount;
        transactions.push_back(Transaction("Deposit", amount, "Today"));
        cout << "Amount Deposited!\n";
    }

    void withdraw(float amount) {
        if (amount > balance) {
            cout << "Insufficient Balance!\n";
            return;
        }
        balance -= amount;
        transactions.push_back(Transaction("Withdraw", amount, "Today"));
        cout << "Amount Withdrawn!\n";
    }

    void showTransactions() {
        cout << "\nRecent Transactions:\n";
        int start = transactions.size() > 5 ? transactions.size() - 5 : 0;

        for (int i = start; i < transactions.size(); i++) {
            cout << transactions[i].type << " - " 
                 << transactions[i].amount << " - " 
                 << transactions[i].date << endl;
        }
    }

    void showBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

// Customer Class
class Customer {
public:
    int customerId;
    string name;
    vector<Account> accounts;

    Customer(int id, string n) {
        customerId = id;
        name = n;
    }

    void createAccount(int accNo) {
        accounts.push_back(Account(accNo));
        cout << "Account Created Successfully!\n";
    }

    Account* getAccount(int accNo) {
        for (int i = 0; i < accounts.size(); i++) {
            if (accounts[i].accNumber == accNo) {
                return &accounts[i];
            }
        }
        return NULL;
    }
};

// Main System
int main() {
    vector<Customer> customers;
    int choice;

    while (true) {
        cout << "\n--- Banking System ---\n";
        cout << "1. Create Customer\n";
        cout << "2. Create Account\n";
        cout << "3. Deposit\n";
        cout << "4. Withdraw\n";
        cout << "5. Show Balance\n";
        cout << "6. Show Transactions\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 0) break;

        int id, accNo;
        float amount;
        string name;

        if (choice == 1) {
            cout << "Enter Customer ID: ";
            cin >> id;
            cout << "Enter Name: ";
            cin >> name;
            customers.push_back(Customer(id, name));
        }

        else if (choice == 2) {
            cout << "Enter Customer ID: ";
            cin >> id;
            cout << "Enter Account Number: ";
            cin >> accNo;

            for (auto &c : customers) {
                if (c.customerId == id) {
                    c.createAccount(accNo);
                }
            }
        }

        else if (choice == 3) {
            cout << "Enter Customer ID: ";
            cin >> id;
            cout << "Enter Account Number: ";
            cin >> accNo;
            cout << "Enter Amount: ";
            cin >> amount;

            for (auto &c : customers) {
                if (c.customerId == id) {
                    Account* acc = c.getAccount(accNo);
                    if (acc) acc->deposit(amount);
                }
            }
        }

        else if (choice == 4) {
            cout << "Enter Customer ID: ";
            cin >> id;
            cout << "Enter Account Number: ";
            cin >> accNo;
            cout << "Enter Amount: ";
            cin >> amount;

            for (auto &c : customers) {
                if (c.customerId == id) {
                    Account* acc = c.getAccount(accNo);
                    if (acc) acc->withdraw(amount);
                }
            }
        }

        else if (choice == 5) {
            cout << "Enter Customer ID: ";
            cin >> id;
            cout << "Enter Account Number: ";
            cin >> accNo;

            for (auto &c : customers) {
                if (c.customerId == id) {
                    Account* acc = c.getAccount(accNo);
                    if (acc) acc->showBalance();
                }
            }
        }

        else if (choice == 6) {
            cout << "Enter Customer ID: ";
            cin >> id;
            cout << "Enter Account Number: ";
            cin >> accNo;

            for (auto &c : customers) {
                if (c.customerId == id) {
                    Account* acc = c.getAccount(accNo);
                    if (acc) acc->showTransactions();
                }
            }
        }
    }

    return 0;
}
