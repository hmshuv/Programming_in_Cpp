#include<iostream>

using namespace std;

int main(){
    float number1, number2, sum, average;
    cout << "Enter two numbers1: ";  //prompt
     cin >> number1;                 //Reads numbers from keyboard
    cout << "Enter two numbers2: ";  
     cin >> number2;

    sum = number1 + number2;
    average = sum/2;

    cout << "Sum = " << sum << "\n";
    cout << "Average = " << average << "\n";

    return 0;
}