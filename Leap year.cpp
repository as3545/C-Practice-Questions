#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%4==0 or n%400==0){
        cout<<"Yes"<<endl;
    } else {
        cout<<"Not"<<endl;
    }return 0;
}
