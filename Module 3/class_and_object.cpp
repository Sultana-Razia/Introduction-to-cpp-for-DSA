#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
};
int main()
{
    Student Rahim;
    Rahim.roll = 29;
    Rahim.cls = 9;
    Rahim.section = 'A';
    char nm[100] = "Rahim Uddin";
    strcpy(Rahim.name, nm);

    Student Karim;
    Karim.roll = 10;
    Karim.cls = 9;
    Karim.section = 'A';
    char nm2[100] = "Karim Ulla";
    strcpy(Karim.name, nm2);

    cout << Rahim.roll;
    return 0;
}