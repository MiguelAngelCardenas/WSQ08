#include <iostream>
using namespace std;

int suma (int num1, int num2){
  return num1 + num2;
}

int resta (int num1, int num2){
  return num1 - num2;
}

int multiplication (int num1, int num2){
  return num1*num2;
}

int division (int num1, int num2){
  return num1 / num2;
}

int remainder (int num1, int num2){
  return num1 % num2;
}

int main (){
int num1,num2, sum, rest, D, remain, multi;
cout << "Give me the first number: ";
cin >> num1;
cout << "Give me the second number: ";
cin >> num2;
sum = suma (num1,num2);
rest = resta (num1,num2);
multi = multiplication (num1, num2);
D = division (num1, num2);
remain = remainder (num1, num2);
cout << "The sum of the numbers is: "<< sum << endl;
cout << "The rest of the numbers is: "<< rest << endl;
cout << "The multiplication of the numbers is: "<< multi<< endl;
cout << "The division of the numbers is: "<< D << endl;
cout << "The remainder of the division is: "<< remain << endl;
return 0 ;
}
