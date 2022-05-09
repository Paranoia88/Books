#include <iostream>
using namespace std;

int main(){

    int R;
    float area;
    const double PI = 3.14; 

    cout << "Enter radius" << endl;
    cin >> R;

    //Calculate area of circle
    area = PI * R * R;

    cout << "The area of radius is " << area;

    return 0;

}
