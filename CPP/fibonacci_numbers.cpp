#include<bits/stdc++.h>
using namespace std;

void fibonacci(int n){

    int a=0,b=1,sum=0;

    cout<<a<<" "<<b<<" ";

    for(int i = 2; i < n; i++){
       sum=a+b;
       a=b;
       b=sum;

       cout<<b<<" ";
    }
}

int main(){

    int n;
    cin>>n;

    fibonacci(n);

    return 0;
}
