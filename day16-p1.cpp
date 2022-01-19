/* 
Ramu is given a pair of words, Now his teacher has given him a task. 
His task is to see if the individual alphabets of the words are mapped properly or not 

If they do so print true else print false

Two strings are mapped properly  if the characters in 's' can be replaced to get 't'.
All occurrences of a alphabet must be replaced with another alphabet while preserving the order of alphabets
No two alphabets may map to the same alphabet but a alphabet may map to itself.


Note:
You may assume both s and t have the same length and all inputs contains('a-z')

input = 
egg
app
output = true

input = 
foo
bar
output = false

input = 
papel
title
output = true

 */
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

bool PairOfWords(string w1,string w2){
    vi chars(26,0);
    for(int i=0;i<w1.length();i++){
        int flag=chars[w1[i]-'a'];
        if(!flag){
            if(count(w1.begin(),w1.end(),w1[i])!=count(w2.begin(),w2.end(),w2[i])){
            return false;
        }
        chars[w1[i]-'a']=1;
        }
    }
    return true;
}
int main(){
    string w1,w2;
    cin>>w1>>w2;
    if(PairOfWords(w1,w2)){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}