#include <iostream>

int main(){

    double temp;
    char unit;

    std::cout << "Temp conversion\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would you like to convert to?: ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temp in Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature is: " << temp << "F\n";
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout << "Enter temp in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32.0) / 1.8;
        std::cout << "Temperature is: " << temp << "C\n";
    }
    else{
        std::cout << "Please enter a vaild unit of temp (C/F)\n";
    }

    std::cout << "---------------";

    return 0;
}
