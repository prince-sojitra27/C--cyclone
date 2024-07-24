#include<iostream>
#include<string.h>
using namespace std;

class Mercedes
{
    public:
    
    char carname[20];
    int speed;
    char cartype[20];
    int enginepower;
    int torque;
    private:
    int price;
    int model;
    int space;
};

int main()
{
    Mercedes car1;
    std::cout << "Enter your car details:- "<< endl;    
    cout << "Enter the car name:- ";
    gets(car1.carname)
    cout << "Enter the car speed:- ";
    cin >> car1.speed;
    cout << "Enter the car type:- ";
    gets(car1.cartype);
    cout << "Enter the car engine power:- ";
    cin >> car1.enginepower;
    cout << "Enter the car torque:- ";
    cin >> car1.torque;

    cout << "Car name\t:- " << car1.carname << endl;
    cout << "Car speed\t:- " << car1.speed << endl;
    cout << "Car type\t:- " << car1.cartype << endl;
    cout << "Car engine power\t:- " << car1.enginepower << endl;
    cout << "Car torque\t:- " << car1.torque << endl;
    
    return 0;
}