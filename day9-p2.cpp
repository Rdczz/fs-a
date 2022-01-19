#include <bits/stdc++.h>
using namespace std;
#define map map<int,int>
int GoldBox(){
    int rows,cols,num;map res;int m=INT_MAX,r=INT_MIN;
    cin>>rows>>cols;
    for(int i=0;i<rows*cols;i++){
        cin>>num;
        if(res.find(num)==res.end()){
            res[num]=1;
        }else{
            res[num]++;
        }
    }
    for(auto it:res){
        if(it.second==rows){
            r=1;
            m=min(it.first,m);
        }
    }
    if(r==1){
        return m;
    }
    else{return -1;}
}
int main(){
    cout<<GoldBox();
    return 0;
}