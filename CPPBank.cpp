#include <iostream>

int main(){

    std::string bank;
    int banknum;
    int balance = 5;
    int wallet = 1500;
    int selected;
    int depoamt;
    int withdrawamt;

    do{
        std::cout << "Select a bank!" << std::endl;
        std::cout << "1 = Piggy Bank, 2 = Super Bank, 3 = Best Bank" << std::endl;
        std::cin >> banknum;
        switch(banknum){
            case 1:
                std::cout << "Thanks for choosing Piggy Bank!" << std::endl;
                bank = "Piggy Bank";
                break;
            case 2:
                std::cout << "Thanks for choosing Super Bank!" << std::endl;
                bank = "Super Bank";
                break;
            case 3:
                std::cout << "Thanks for choosing Best Bank!" << std::endl;
                bank = "Best Bank";
                break;
            default:
                std::cout << "Please enter a vaild bank (#)" << std::endl;
        }
    } while(bank.empty());

    std::cout << "You are currently banking with " << bank << std::endl;
    std::cout << "You got a sign-up bonus of $5 added to your bank!" << std::endl;

    while(true){
        std::cout << "Commands ----------" << std::endl;
        std::cout << "1 = display bal\n2 = display wallet\n3 = deposit\n4 = withdraw\n5 = gain interest\nEnter a number (1-5): ";
        std::cin >> selected;

        switch(selected){
            case 1:
                std::cout << "You have $" << balance << " in " << bank << std::endl;
                break;
            case 2:
                std::cout << "You have $" << wallet << " in your wallet" << std::endl;
                break;
            case 3:
                std::cout << "How much would you like to deposit from wallet to bank?: ";
                std::cin >> depoamt;
                if(depoamt > wallet){
                    std::cout << "You don't have that amount in your wallet";
                    break;
                }
                balance += depoamt;
                wallet -= depoamt;
                depoamt = 0;
                std::cout << "You have $" << balance << " in " << bank << std::endl;
                break;
            case 4:
                std::cout << "How much would you like to withdraw from bank to wallet?: ";
                std::cin >> withdrawamt;
                if(withdrawamt > balance){
                    std::cout << "You don't have that amount in your bank";
                    break;
                }
                balance -= withdrawamt;
                wallet += withdrawamt;
                withdrawamt = 0;
                std::cout << "You have $" << balance << " in your wallet" << std::endl;
                break;
            case 5:
                balance *= 1.03;
                std::cout << "You gained 3 percent interest! You now have $" << balance << " in your " << bank << std::endl;
                break;
        }
    }

    return 0;
}
