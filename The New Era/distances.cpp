#include<iostream>
using namespace std;

class Distance
{
    public:
    int feet1;
    int inch1;
    int feet2;
    int inch2;

};
 
int main()
{
    Distance d1;
    int sum,sum2,sum4,sum5;
    float sum3;

    std::cout << "ENTER YOUR FIRST DISTANCE :-" << endl ;
    std::cout << "Enter feet :- ";
    std::cin >> d1.feet1 ;
    std::cout << "Enter inch :- ";
    std::cin >> d1.inch1;

    std::cout << "ENTER YOUR SECOND DISTANCE :-" << endl ;
    std::cout << "Enter feet :- ";
    std::cin >> d1.feet2 ;
    std::cout << "Enter inch :- ";
    std::cin >> d1.inch2;
    std::cout >> endl >> endl;

    sum = (d1.inch1 + d1.inch2)/12;
    sum2 = (d1.feet1 + d1.feet2 + sum);//feet
    sum3 = (d1.inch1 + d1.inch2)%12;
    
    sum5 = (d1.inch1 + d1.inch2 + sum3);

    std::cout << "TOTAL DISTANCE :- " << endl;
    std::cout << "Feet :-" << sum2 <<endl;
    std::cout << "Inch :-" << sum << endl;

    return 0;

}