#include <iostream>
#include <string>

int main(){

    std::string message;
    std::cout << "Please enter a message: ";
    std::getline(std::cin, message);
    std::cout << message << std::endl;

    for(auto i{0}; i < message.length(); i++){
        if(message.at(i) == 'a' || message.at(i) == 'A'){
            message.at(i) = 'x';
        }
    }
    std::cout << "Encrypt message: " << std::endl;
    std::cout << message << std::endl;

    for(auto i{0}; i < message.length(); i++){
        if(message.at(i) == 'x' || message.at(i) == 'X'){
            message.at(i) = 'a';
        }
    }
    std::cout << "The real message is: " << std::endl;
    std::cout << message << std::endl;
}