// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int mysumfunc(int n1, int n2){
    int sum = n1 + n2;
    return sum;
}

int main(){
    int number1, number2;
    cout << "Enter number1 and number2: ";
    cin >> number1;
    cin >> number2;
    
    float ans = mysumfunc(number1, number2);
    //return the float value to a int type variable will give 0.00 answer
    //return the int value to a float type var gives the ans
    //giving float as input to int tyoe give int part of the first variable
    printf("%f", ans);
}

    
