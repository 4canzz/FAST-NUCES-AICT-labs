//Please note that both Exersices 2 and 3 follow the same code, Exersice 1 was related to dryrunning and won't be included in this repository.
#include <iostream>
using namespace std;

void InputCardDetails(int& card_number, int& Init_balance, char& cardtype);
void WithdrawMoney(int card_number, float& balance, char cardtype, int slimit, int glimit, int Init_balance);

int main() {
    int card_number, Init_balance, option;
    float balance = 0;
    const int glimit = 25000, slimit = 100000;
    char cardtype;
    
    do {
        cout << "------------------ WELCOME TO THE BANK ATM -------------" << endl;
        cout << "enter 1 to put card details, and 2 to withdraw money, 0 to exit" << endl;
        cin >> option;
        
        while (option < 0 && option > 2) {
            cout << "please enter valid number (0 - 2): ";
            cin >> option;
        }
        
        if (option == 1) InputCardDetails(card_number, Init_balance, cardtype);
        if (option == 2) WithdrawMoney(card_number, balance, cardtype, slimit, glimit, Init_balance);
        
    } while (option != 0);

    cout << "thank you for using the ATM" << endl;
    return 0;
}

void InputCardDetails(int& card_number, int& Init_balance, char& cardtype) {
    int digits = 0;
    cout << "enter card number: ";
    cin >> card_number;
    
    while (card_number <= 9999 || card_number >= 100000) {
        cout << "card number should be 5 digits long. enter valid card number: ";
        cin >> card_number;
    }
    
    cout << "enter Initital Balance: ";
    cin >> Init_balance;
    
    cout << "enter type of card ('g 'for gold or 's' for silver)";
    cin >> cardtype;
    
    while (cardtype != 'g' && cardtype != 's') {
        cout << "enter either 'g' or 's' only: ";
        cin >> cardtype;
    }
}

void WithdrawMoney(int card_number, float& balance, char cardtype, int slimit, int glimit, int Init_balance) {
    balance = Init_balance;

    float withdrawAmount;
    cout << "Current Balance: $" << balance << endl;
    cout << "Enter amount to withdraw: ";
    cin >> withdrawAmount;
    
    if (cardtype == 's') {
        if (withdrawAmount > slimit) {
            cout << "Error: Silver card limit is " << slimit << endl;
            return;
        }
    }
    
    else if (cardtype == 'g') {
        if (withdrawAmount > glimit) {
            cout << "Error: Gold card limit is " << glimit << endl;
            return;
        }
    }
    
    if (withdrawAmount > balance) {
        cout << "Error: Insufficient balance." << endl;
    }
    else {
        balance = balance - withdrawAmount;
        cout << "Withdrawal successful! your new Balance: $" << balance << endl;
    }
}


/*Exercise – 2 (10 points)
We need to design software for an ATM machine. An ATM card is used for money withdrawal.
The systems needs following information of a card:
 Card Number
 Initial balance
 Type of card. (gold and silver)
InputCardDetails( .. ): This function should prompt the user to enter relevant details of ATM Card.
Decide the prototype yourself. Remember that variables must be declared in main only.The output
from function should be displayed on console through main. Write the main and test your
program.
Exercise – 3 (10 points)
In the previous exercise add the with draw money functionality.

WithdrawMoney(..): This function should take all the details of cards as input and ask the user
the amount he/she wants to withdraw. Following rules should be observed:
 For Silver card: Money to be withdrawn cannot be more than 10000.
 For Gold card: Money to be withdrawn cannot be more than 25000.
Your program should keep displaying the menu after each function call unless user wants to exit.
Algorithm of main program is given below. Convert it into C++ to test your functions
accordingly
 Declare all required variables in main
 Get input of a card from user
 Display the menu
 Withdraw some amount*/