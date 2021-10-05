#include <iostream>

int main(){
    int small_rooms{0};
    int big_rooms{0};
    const int promocion_days {30};
    const double small_rooms_price {25};
    const double big_rooms_price {35};
    const double tax {0.06};

    std::cout <<"Carpet Clean Service" << std::endl;

    std::cout << "\nHow many small rooms? " << std::endl;
    std::cin >> small_rooms;
    
    std::cout << "How many big rooms? " << std::endl;
    std::cin >> big_rooms;

    std::cout << "\nNumber of small rooms: " << small_rooms << std::endl;
    std::cout <<"Number of larger rooms: " << big_rooms << std::endl;
    std::cout << "Price per small room: $" << small_rooms_price << std::endl;
    std::cout << "Price per larger room: $" << big_rooms_price << std::endl;

    double cost {(small_rooms * small_rooms_price) + (big_rooms * big_rooms_price) };
    double tax_calculation {cost * tax};

    std::cout << "Cost: $" << cost << std::endl;
    std::cout << "Tax: $" << tax_calculation << std::endl;

    std::cout << "===============================================" << std::endl;

    double total_estimated {cost + tax_calculation};
    std::cout <<"\nTotal Estimate: $"<< total_estimated << std::endl;
    std::cout << "This estimate is valid for " << promocion_days << " days." << std::endl;


    return 0;
}