#include<iostream>
using namespace std;
int main(){
    int n, i,k, a[100], count=0;
    cin>> n>>k;
    for(i=1; i<=n; i++){
        cin>> a[i];

    }
    for(i=1; i<=n; i++){
        if(a[i]>0 && a[i] >= a[k]){
            count++;
        }
    }
    cout<< count<< endl;
    }
