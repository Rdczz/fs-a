/* Mr. Bob is a Military Encoders. 
Mr. Bob writes a word as shown below and then merges them. 
Help Bob to write the code. 

Mr. Bob will be given a word 'w' and a number 'n' 

Sample Test Case - 1
input = 
ABCDE
2
output = ACEBD


This is How Bob writes the letters of the word 
A    C    E
   B    D

Now concatenate the two rows and ignore spaces in every row. We get ACEBD


Sample Test Case - 2
input = system
3
output = seytms


s         e
  y    t    m
     s

Now concatenate the 3 rows we get seytms */
#include <bits/stdc++.h>

using namespace std;

bool sortbyfirst(const pair<int,int> &a,const pair<int,int> &b){
    return (a.first<b.first);
}
void Encoded(string s, int n)
{
    vector<pair<int,char>> v;
    int flag=1,val=0;
    for(int i=0;i<s.length();i++){
        v.push_back(make_pair(val,s[i]));
        if(flag){
            val+=1;
            if(val==n-1){
                flag=0;
            }
        }else{
            val-=1;
            if(val==0){
                flag=1;
            }
        }
    }
    sort(v.begin(),v.end(),sortbyfirst);
    for(auto x:v){
        cout<<x.second;
    }
    
}

int main()
{                   //abcdefghijklmnopqrstuvwxyz 5 aiqybhjprxzcgkoswdflntvemu
    int n;
    string s;
    cin >> s>>n;
    Encoded(s, n);
    return 0;
}
