#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    int temp=1;char letter='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=(i+1);j++){
            if(j%2==0){
                cout<<letter;
                letter++;
            }else{
                cout<<"*";
            }
        }cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pattern(n);
    return 0;
}