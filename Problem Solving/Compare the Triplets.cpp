#include <bits/stdc++.h>
using namespace std;

int main(){
    int a0, a1, a2;
    cin>>a0>>a1>>a2;
    
    int b0,b1,b2;
    cin>>b0>>b1>>b2;
    
    int a=0;
    int b=0;
    if(a0>b0)
        a++;
    
    if(a0<b0)
        b++;
    
    if(a1>b1)
        a++;
    
    if(a1<b1)
        b++;
    
    if(a2>b2)
        a++;
    
    if(a2<b2)
        b++;
    
    cout<<a<<" "<<b<<endl;
    return 0;
}