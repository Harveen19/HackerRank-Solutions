#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long int sum=0;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n; i++){
        cin>>arr[i];
        sum = sum + arr[i];
    }
    cout<< sum <<endl;
    return 0;
}
