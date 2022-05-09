#include <iostream>
using namespace std;

int main(){
    int num1 = 10; int num2 = 2;
    int sum, diff, mul, div, mod;


    //Calculate
    sum = num1 + num2;
    diff = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    mod = num1 % num2;

    cout << "The sum is " << sum <<endl;
    cout << "The diff is " << diff <<endl;
    cout << "The mul is "  << mul <<endl;
    cout << "The div is "  << div <<endl;
    cout << "The remainder is " << mod <<endl;

    return 0;

}