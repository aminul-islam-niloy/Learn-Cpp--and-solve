#include<iostream>
using namespace std;

int main(){
 int times,number;
 cout << " Enter how many times you want to compute : ";
    cin>> times;

   for(int i=1; i<=times ; i++ ){
    cout<< " Enter number for odd even ";
    cin>> number ;

    if(number %2==0){
        cout<< "   Number is Even " << endl;
    }
    else {
        cout<< "   Number is odd" << endl;
    }
  }


return 0;
}
