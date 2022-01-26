/* You will be given a word 'w' and a group of words 'g'. 

check if 'w' can be broken into a space separated characters of one or more in the given group of words 'g'

Note the same word in the group of words may be re used multiple times in the breaking. 

The first line of input contains the group of words(g) followed by a word(w)

if it can done print true else print false

input=fleet gold
fleetgold
output=true

Explanation: prints true because fleetgold  can be broken as fleet gold

input=apple pen
applepenapple
output=true

Explanation: print true because "applepenapple" can be broken as "apple pen apple".
Note that you are allowed to reuse group of words

input=cats dogs and and cat
catsandog
output=false */
#include <bits/stdc++.h>
using namespace std;
#define msi map<string,int>
#define vb vector<bool>
bool CanBeBroken(msi& map,string s){
    vb dp(s.length()+1,false);
    dp[0]=true;
    for(int len=1;len<=s.length();len++){
        for(int i=0;i<len;i++){
            if(dp[i] && (map.find(s.substr(i,len-i))!=map.end())){
                dp[len]=true;
                break;
            }
        }
    }
    for(auto it:dp){
        cout<<it<<" ";
    }cout<<endl;
    return dp[dp.size()-1];
}

int main(){
    msi map;string s1,s2,word;
    getline(cin,s1);
    cin>>s2;
    stringstream ss(s1);
    while(ss>>word){
            map.insert({word,0});
    }
    if(CanBeBroken(map,s2)){
        cout<<"true";
    }else{
        cout<<"false";
    };
    return 0;
}