#include<iostream>
using namespace std;
int fac(int n){
    int fact=1;
    while(n>0){
        fact*=n;
        n--;
    }return fact;
}
int main(){
    int n;
    cin>>n;
    cout<<fac(n);
    return 0;
}
