#include<cctype>
#include<iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    if(isalpha(c)){
        cout<<"Alphabet"<<endl;
    } else {
        cout<<"Not"<<endl;
    }return 0;
}
