/*
Data types
int => 1,2,3,4,5, -100
float => 1.2, 0.06, -2.6
double => paisa
boolean => True False
char => Single character
string =>  ...........
void => Empty

*/
#include <iostream>
using namespace std;

int main(){
    //Storing values in different dataypes
    int age = 29;
    string name = "Roy";
    float height = 6.0;
    double money = 76000.0;
    bool isMarried = false;
    char gender = 'F';
    double salary = 50000;

    cout << "Name is " << name <<endl;
    cout << "Gender is " << gender <<endl;
    cout << "Age is " << age <<endl;
    cout << "She married = " <<isMarried <<endl;
    cout << "Height is " << height <<endl;
    cout << "Money is " << money <<endl;
    cout << "Salary is " << salary <<endl;

    return 0;
}