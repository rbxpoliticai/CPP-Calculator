#include <iostream>

// switch useage example

int main(){

    int hour;
    std::cout << "What hour of the day did you wake up? (1-24): ";
    std::cin >> hour;

    switch(hour){
        case 1:
            std::cout << "Why are you up so late its only 1!";
            break;
        case 2:
            std::cout << "It's pretty early you should sleep for a bit longer";
            break;
        case 3:
            std::cout << "It's still early head back to bed";
            break;
        case 4:
            std::cout << "Sleep for a few more hours";
            break;
        case 5:
            std::cout << "Early bird gets the worm";
            break;
        case 6:
            std::cout << "You must have school or work";
            break;
        case 7:
            std::cout << "7 is a decent time to wake up";
            break;
        case 8:
            std::cout << "8 is one of the best times to wake up";
            break;
        case 9:
            std::cout << "don't tell anyone but 9 is the best time to wake up";
            break;
        case 10:
            std::cout << "Okay why are you sleeping in";
            break;
        case 11:
            std::cout << "It's almost the middle of the day you shouldve been up hours ago";
            break;
        case 12:
            std::cout << "It's the middle of the day, unless you were up late last night why are you waking this late";
            break;
        case 13:
            std::cout << "What an odd time to wake up at, your morning is gone and so is some of your day";
            break;
        default:
            std::cout << "It's so late how did it take this long to wake up";
            break;
    }

    return 0;
}
