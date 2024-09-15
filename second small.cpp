#include<iostream>
#include<climits>
using namespace std;
void second(int arr[], int n){
    int first, second;
    first=second=INT_MAX;
    if(n<2){
        return;
    }
    for(int i=0;i<n;i++){
        if(first>arr[i]){
            second=first;
            first=arr[i];
        } else if(second>arr[i] and first!=arr[i]){
            second=arr[i];
        }
    }
    if(second==INT_MAX){
        cout<<"Not"<<endl;
    } else {
        cout<<second;
    }
}
int main(){
    int arr[]={1,2,3,4,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    second(arr, n);
    return 0;
}
