/* 
Gopal is given a string s, Now he has to remove duplicate letters so that every letter appears once and only once.

He must make sure that the result produces should occur in the order given in string 

Example 1:

Input = bcabc
Output = bca
 */

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

void StringNoDup(string s){
    vi res(26,0);string result="";int min_index=0;
    for(int i=1;i<s.length();i++){
            if(s[i-1]>s[i]){
                if(s[min_index]>s[i]){
                    min_index=i;
                }
            }
    }
    for(int i=min_index;i<s.length();i++){
        if(!res[s[i]-'a']){
            result+=s[i];
            res[s[i]-'a']=1;
        }
    }
    cout<<result;
}

int main(){
    string s;
    cin>>s;
    StringNoDup(s);
}