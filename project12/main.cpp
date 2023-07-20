#include <iostream>
#include <vector>
#include <cctype>

char print_options(char &menuOptions);
std::vector<int> addNumber(int number, std::vector<int> &numbers);
void print_list_numbers(std::vector<int> numbers);
void calculate_mean(std::vector<int> numbers);
void small_number(std::vector<int> numbers);
void big_number(std::vector<int> numbers);
std::vector<int> clear_list(std::vector<int> &numbers);
void search_list(std::vector<int> numbers);

int main(){
    std::vector<int> numbers {};
    int valueNumber{};

    while(true){
        char menuOptions{};
        print_options(menuOptions);

        if(menuOptions == 'q' || menuOptions == 'Q'){
            break;
        }

        switch(menuOptions){
            case 'P':
            case 'p':
                print_list_numbers(numbers);
                break;

            case 'A':
            case 'a':
                    addNumber(valueNumber, numbers);
                break;

            case 'M':
            case 'm':
                calculate_mean(numbers);
                break;
            case 'S':
            case 's':
                small_number(numbers);
                break;
            case 'L':
            case 'l':
                big_number(numbers);
                break;
            case 'C':
            case 'c':
                clear_list(numbers);
                break;
            case 'R':
            case 'r':
                search_list(numbers);
                break;
            default:
                std::cout << "\nUnknown selection, please try again" << std::endl;
                std::cout << "---------------------------------------" << std::endl;
        }

    }
}

char print_options(char &menuOptions){

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

    return tolower(menuOptions);
}
std::vector<int> addNumber(int number, std::vector<int> &numbers){
    std::cout << "Enter a integer: ";
    std::cin >> number;

    numbers.push_back(number);
    std::cout << "The integer : " << number << " was add sucessfully" << std::endl;
    std::cout << "---------------------------------------" << std::endl;

    return numbers;
}
void print_list_numbers(std::vector<int> numbers){
    if(numbers.empty()){
        std::cout << "[] - the list is empty" << std::endl;
        std::cout << "---------------------------------------" << std::endl;
    }else {
        for(auto values : numbers){
            std::cout << values << " ";
        }
        std::cout << "\n---------------------------------------" << std::endl;
    }
}
void calculate_mean(std::vector<int> numbers){
    int x{};
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
}
void small_number(std::vector<int> numbers){
    int smaller{};
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
}
void big_number(std::vector<int> numbers){
    int greater{};
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

}
std::vector<int> clear_list(std::vector<int> &numbers){
    numbers.clear();
    std::cout << "The list is clear" << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    return numbers;
}
void search_list(std::vector<int> numbers){
    int searchNumber{};
    int timesA{};
    std::cout << "Enter the number you wanna search: ";
    std::cin >> searchNumber;

    for(size_t i{0}; i < numbers.size(); i++){
        if(numbers.at(i) == searchNumber){
            timesA++;
        }
    }
    std::cout << "Your number appear " << timesA << " in the list." << std::endl;
    std::cout << "---------------------------------------" << std::endl;

}