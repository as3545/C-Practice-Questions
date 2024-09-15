#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<2){
        cout<<"Not prime"<<endl;
    }
        if(n%2==0){
            cout<<"Prime"<<endl;
        } else{
            cout<<"Not Prime"<<endl;
    }return 0;
}
