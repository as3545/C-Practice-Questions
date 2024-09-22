#include<iostream>
using namespace std;
int count(string s){
    int sum=0;
    for(char ch:s){
        if(isdigit(ch)){
            sum+=ch-'0';
        }
    }return sum;
}
int main(){
    string s="1234";
    cout<<count(s);
    return 0;
}
