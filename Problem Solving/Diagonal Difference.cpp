#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int primaryDiagonal=0, secondaryDiagonal=0;
    cin>>N;
    
    int arr[N][N];
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin>> arr[i][j];
            
    if(i==j){
        primaryDiagonal += arr[i][j];
        }
    }
}
    
    for(int i=0; i<N; i++){
        for(int j=N-1-i; j>=0; j--){
            secondaryDiagonal += arr[i][j];
            break;
        }
    }
    cout<< abs(primaryDiagonal - secondaryDiagonal) <<endl;
    return 0;
}
