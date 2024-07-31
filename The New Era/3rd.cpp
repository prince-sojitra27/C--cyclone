#include <iostream>
using namespace std;

class Time
{
public:
    int second = 0;
    int minute = 0;
    int hour = 0;
};

main()
{

    Time t1;
    cout << "Enter The seconds :- ";
    cin >> t1.second;

    for (; t1.second >= 60;)
    {
        t1.minute = t1.minute + 1;
        t1.second = t1.second - 60;
    }

    for (; t1.minute >= 60;)
    {
        t1.hour = t1.hour + 1;
        t1.minute = t1.minute - 60;
    }

    cout << "Hours :- " << t1.hour << endl;
    cout << "Minutes :- " << t1.minute << endl;
    cout << "Seconds :- " << t1.second << endl;
}