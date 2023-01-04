#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'simpleArraySum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY ar as parameter.
 */

int main(){
    int n;
    int sum;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        cin>>sum;
        sum= sum+arr[i];
    }
    cout<<sum;
    return  0;
}
