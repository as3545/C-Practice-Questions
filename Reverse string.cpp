#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="Geek";
    int n=s.size();
    for(int i=n-1;i>=0;i--){
        cout<<s[i];
    }cout<<endl;
    return 0;
}
