//Condtion and loop

//if condition
//if else condition
#include <iostream>
using namespace std;

int main(){
    int day;

    cout << "Enter no. of days" <<endl;
    cin >> day; 

    if(day == 0){
        cout << "Today is Cold Sunday";
    }
    else if (day == 1){
        cout << "Today is Hot Mondy";
    }
    else if (day == 2 ){
        cout<< "Today is Tuesday";
    }
    else{
        cout << "Invalid";
    }
    return 0;
}