#include <iostream>
using namespace std;

int main(){
    
    int number_of_cents {0};
    const int dollar{100};
    const int quarter{25};
    const int dime{10};
    const int nickel{5};
    const int penny{1};

    cout << "Please, entre the number of cents: ";
    cin >> number_of_cents;

    cout <<"Dollar: " << number_of_cents / dollar << endl;
    number_of_cents -= (number_of_cents / dollar) * dollar;

    cout << "Quarter: " << number_of_cents / quarter << endl;
    number_of_cents -= (number_of_cents / quarter) * quarter;

    cout << "Dime: " << number_of_cents / dime << endl;
    number_of_cents -= (number_of_cents / dime) * dime;

    cout << "Nickel: " << number_of_cents / nickel << endl;
    number_of_cents -= (number_of_cents / nickel) * nickel;

    cout << "Penny : " << number_of_cents / penny << endl;
    number_of_cents -= (number_of_cents / penny) * penny;


    return 0;




}