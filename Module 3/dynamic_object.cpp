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
        roll = r;
        cls = c;
        section = s;
        strcpy(name, n);
    }
};
int main()
{
    char name[100] = "Rahim Uddin";
    // Student rahim(55,7,'C',name);
    Student *rahim = new Student(55, 7, 'C', name);

    // cout << (*rahim).name << endl;
    // cout << (*rahim).roll << endl;
    // cout << (*rahim).cls << endl;
    // cout << (*rahim).section << endl;

    // Shortcut
    // arrow sign
    //(*rahim)=rahin->

    cout << rahim->name << endl;
    cout << rahim->roll << endl;
    cout << rahim->cls << endl;
    cout << rahim->section << endl;

    // delete an object
    delete rahim;
    cout << rahim->name << endl;
    cout << rahim->roll << endl;
    cout << rahim->cls << endl;
    cout << rahim->section << endl;
    return 0;
}