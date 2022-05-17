#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< " Enter how many array you want to input : ";
    cin>> n;

    int array[50];
    cout << "Enter array Element : ";
    for (int i=0; i<n; i++){
        cin>> array[i];
    }

    cout<< " Even Number list" << endl;
    for(int i=0; i<n; i++){
        if(array[i] %2==0){
            cout<< " " << array[i] <<endl ;
        }
    }

        cout<< " Odd number list " <<endl;
        for(int i=0; i<n; i++){
            if(array[i] %2 !=0){
                cout<<" " << array[i]<< endl;
            }
        }
    return 0;
    }
