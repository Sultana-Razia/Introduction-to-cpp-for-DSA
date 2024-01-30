#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;

    Student(int r, int c, int s, char *n)
    {
        // cout << "I am called automatically" << endl;
        roll = r;
        cls = c;
        section = s;
        strcpy(name, n);
    }
};
int main()
{
    Student Rahim(29, 7, 'A', "Rahim Ullah");
    Student Karim(55, 10, 'b', "Karim Ullah");

    cout << Rahim.roll << endl;
    cout << Rahim.cls << endl;
    cout << Rahim.section << endl;
    cout << Rahim.name << endl;

    cout << Karim.roll << endl;
    cout << Karim.cls << endl;
    cout << Karim.section << endl;
    cout << Karim.name << endl;
    return 0;
}