#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    double positive;
    double negative;
    double zero;
    
    for(int i=0;i<n;i++){
        if(arr[i] > 0)
           positive ++;
        else if(arr[i] < 0)
           negative ++;
        else
           zero ++;
    }
    cout<< positive/n <<endl;
    cout<< negative/n <<endl;
    cout<< zero/n <<endl;
    return 0;
}
