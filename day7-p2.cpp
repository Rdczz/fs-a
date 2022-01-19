#include <bits/stdc++.h>
using namespace std;

void PalindromeString(string s){
    string res,rev;
    for(auto x:s){
        if(isalpha(x)){
            res+=x;
        }
    }
    rev=res;
    reverse(rev.begin(),rev.end());
    cout<<rev<<endl;
    cout<<res<<endl;
    /* if(res.compare(rev)){
        return true;
    }
    return false; */
    if(rev.compare(res)==0){
        cout<<"true";
    }else{
        cout<<"false";
    }
}
int main(){
    string s; //no it i&s oPose*d art see's trade;s opposition
    getline(cin,s);
    /* if(PalindromeString(s)){
        cout<<"true";
    }else{
        cout<<"false";
    } */
    PalindromeString(s);
    return 0;
}