#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
int MaxPersons(int n){
    vi res;int num,count=0,sum=0;
    for(int i=0;i<n;i++){
        cin>>num;
        res.push_back(num);
    }
    sort(res.begin(),res.end());
    for(int i=0;i<res.size();i++){
        sum+=res[i];
        if(sum<500){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<MaxPersons(n);
    return 0;
}