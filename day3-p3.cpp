#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string s){
   int n = s.length();
   string str="";
   if (n == 0)
     return str; //pqqprs
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[i+1]){
            str+=s[i];
        }else{
            i++;
        }
    }
   str.push_back(s[n-1]);
   return str;   
}
int main() {
      
    string s;
    cin>>s;
    cout<<removeDuplicates(s);
    return 0;
}