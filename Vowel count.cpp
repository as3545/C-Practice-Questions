#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U' or s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
            c++;
        }
    } cout<<c<<endl;
    return 0;
}
