#include <iostream>
using namespace std;

void update(int *a,int *b) {
    // Complete this function 
    int count= *a;
    *a= *a + *b;
    *b= count - *b;
    
    if(*b<0){
        *b= -(*b);
    }
}

int main() {
    int a, b;
    cin>>a>>b;
    
    int *aptr = &a;
    int *bptr = &b;
    
    update(aptr,bptr);
    
    cout<<a <<endl;
    cout<<b <<endl;
    return 0;
}
