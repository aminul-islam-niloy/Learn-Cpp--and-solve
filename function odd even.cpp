#include<iostream>
using namespace std;

void odd_even(int num){

  if(num %2==0){
    cout<< " Number is even" << endl;
  }
  else{
    cout<< " Number is odd"<< endl;
  }
}

int main(){
 int n,number;


 cout<< " Enter limit number : ";
 cin>> n;
  for(int i=0; i<n; i++){
    cout<< " Enter number : ";
    cin>> number;

     odd_even(number);
  }


return 0;
}
