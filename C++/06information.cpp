#include <iostream>
using namespace std;

int main(){
    string name;
    long long int tel_no;
    string occupation;
    char gender;
    
    cout << "Enter your name" <<endl;
    cin >> name;
    cout << "Enter your telephone number" << endl;
    cin >> tel_no;
    cout << "Enter your occupation" << endl;
    cin >> occupation;
    cout << "Enter your gender" << endl;
    cin >> gender;

    cout << "Your name is" << name;
    cout << "Your id is" << tel_no;
    cout << "Your hobby is" << occupation;
    cout << "Your gender is" << gender;

    return 0;

}