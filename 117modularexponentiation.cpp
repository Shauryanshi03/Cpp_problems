#include<iostream>
using namespace std;

int exponentiation(int x,int n,int m){
    int res=1;

    while(n>0){
        if(n&1){
            res=(1LL*(res)*(x)%m)%m;
        }
        x=(1LL*(x)%m*(x)%m)%m;
        n=n>>1;
    }
    return res;
}

int main(){

    int x=4;
    int n=3;
    int m=10;

    cout<<exponentiation(x,n,m);
}