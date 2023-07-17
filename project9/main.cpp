#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers {3, 5, 7, 5, 6, 5, 3, 5};
    int valueNumber{};
    int x{};
    int smaller{};
    int greater{};
    int searchNumber{};
    int timesA{};

    while(true){
        char menuOptions{};
        std::cout << "P - Print numbers" << std::endl;
        std::cout << "A - Add a number" << std::endl;
        std::cout << "M - Display mean of the numbers" << std::endl;
        std::cout << "S - Display the smallest number" << std::endl;
        std::cout << "L - Display the largest number" << std::endl;
        std::cout << "C - Clear the list" << std::endl;
        std::cout << "R - Search for a number in the list" << std::endl;
        std::cout << "Q - Quit" << std::endl;
        std::cout << "Enter your choice" << std::endl;
        std::cin >> menuOptions;

        if(menuOptions == 'q' || menuOptions == 'Q'){
            break;
        }

        switch(menuOptions){
            case 'P':
            case 'p':
                if(numbers.empty()){
                    std::cout << "[] - the list is empty" << std::endl;
                }else {
                    for(auto values : numbers){
                        std::cout << values << " ";
                    }
                }
            break;

            case 'A':
            case 'a':
                std::cout << "Enter a integer: ";
                std::cin >> valueNumber;

                numbers.push_back(valueNumber);
                std::cout << "The integer : " << valueNumber << " was add sucessfully" << std::endl;
                std::cout << "---------------------------------------" << std::endl;
            break;

            case 'M':
            case 'm':
                if(numbers.empty()){
                    std::cout << "Unable to calculate the mean - no data." << std::endl;
                    std::cout << "---------------------------------------" << std::endl;
                }
                else {
                    for (size_t i{0}; i < numbers.size(); i++){
                        x += numbers[i];
                    }
                    x = x / numbers.size();
                    std::cout << "The average is: " << x << std::endl;
                    std::cout << "---------------------------------------" << std::endl;

                }
                break;
            case 'S':
            case 's':
                if(numbers.empty()){
                    std::cout << "[] - the list is empty" << std::endl;
                    std::cout << "---------------------------------------" << std::endl;
                }
                else{
                    smaller = numbers[0];
                    for(size_t i{0}; i < numbers.size(); i++){
                        if(numbers.at(i) < smaller){
                            smaller = numbers.at(i);
                        }
                    }
                    std::cout << "The smallest number is " << smaller  << std::endl;
                    std::cout << "---------------------------------------" << std::endl;
                }
                break;
            case 'L':
            case 'l':
                if(numbers.empty()){
                    std::cout << "[] - the list is empty" << std::endl;
                    std::cout << "---------------------------------------" << std::endl;
                }
                else{
                    greater = numbers[0];
                    for(size_t i; i < numbers.size(); i++){
                        if(numbers.at(i) > greater){
                            greater = numbers.at(i);
                        }
                    }
                    std::cout << "The greater number is " << greater << std::endl;
                    std::cout << "---------------------------------------" << std::endl;
                }
                break;
            case 'C':
            case 'c':
                numbers.clear();
                std::cout << "The list is clear" << std::endl;
                std::cout << "---------------------------------------" << std::endl;
                break;
            case 'R':
            case 'r':
                std::cout << "Enter the number you wanna search: ";
                std::cin >> searchNumber;

                for(size_t i{0}; i < numbers.size(); i++){
                    if(numbers.at(i) == searchNumber){
                        timesA++;
                    }
                }
                std::cout << "Your number appear " << timesA << " in the list." << std::endl;
                std::cout << "---------------------------------------" << std::endl;

                break;
            default:
                std::cout << "\nUnknown selection, please try again" << std::endl;
                std::cout << "---------------------------------------" << std::endl;
        }

    }
}