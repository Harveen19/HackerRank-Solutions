#include<iostream>
using namespace std;

int main(){

    int n;
    int arr[1000];
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n/2;i++){
        int temp;
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
