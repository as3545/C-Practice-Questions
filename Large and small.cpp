#include<iostream>
using namespace std;
void largesmall(int arr[], int n){
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }else {
            min=arr[i];
        }
    }
    cout<<min<<" "<<max<<endl;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    largesmall(arr,n);
    return 0;
}
