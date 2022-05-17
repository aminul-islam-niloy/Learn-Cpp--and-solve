#include<iostream>
using namespace std;
int main(){
 int number;
 cout << "Enter any number" << endl;
 cin >> number;

 if(number< 0){
    cout << "number is negetive";

 }
 else if (number > 0){
    cout << "number is Positive";
 }
 else{
    cout << " Number is 0";
}
return 0;
}

