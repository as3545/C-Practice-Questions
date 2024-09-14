#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int l=0;
    string s;
    cin>>s;
    for(int i=0;s[i]!='\0';i++){
        l++;
    }cout<<l<<endl;
    return 0;
}
