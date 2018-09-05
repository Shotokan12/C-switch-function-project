//switch is for case
//case multiple things lets you do more then one thing
//atm machine 
//#include<iosteam> downloads your in and out iosteam
// commant lines take lines out of the program.
#include<iostream>
using namespace std;
int main() {
    //everything else in the program goes here
    // every method or int
    //clean code you declair your int inside your main
    
    double balance, withdrawl, deposit;
    balance = 0;
    int input; 
    //int is a number
    cout << "[1] To display the balance" << "\n"
         << "[2] To deposit" << "\n"
         << "[3] To widthdraw" << "\n"
         << "[4] To Exit type -23" << "\n"
         << "Enter Choice:" << "\n";
    cin >> input;
    while(input != -23){
        switch (input) {
            case 1: cout << "The current balance in your account is " << balance << "\n";
            break;
            case 2:  cout << "Enter the Sum that you would like to add to your account" << "\n";
            cin >> deposit;
            balance = balance + deposit;
            cout << "You have deposited " << deposit << "\n";
            break;
            case 3: cout << "Enter the sum you wish to widthraw" << "\n";
            cin >> withdrawl;
            balance = balance - withdrawl;
            cout << "You have withdrawn" << withdrawl << " from your account." << "\n";
            
            
        };
        cout << "Enter your Choice" << "\n";
        cin >> input;
    };
    return 0;
} //the last line of the program
