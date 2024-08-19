#include <iostream>

int main(){

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if(name.empty()){
        std::cout << "Please enter a vaild name";
    }
    else if(name.length() > 12){
        std::cout << "Your name cannot be over 12 characters.";
    }
    else{
        std::cout << "Welcome, " << name;
    }

    return 0;
}
