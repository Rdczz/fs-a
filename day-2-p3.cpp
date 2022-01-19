/* CV Game

Somu is playing a game. The Game Rules are as follows 

A word will be given, where Ramu has to replace the letters of the word with V/C
If the letter is a vowel it will be de denoted by upper case letter ‘V’ and a 
if the letter is a consonant it will be denoted by upper case letter ‘C’. 

Note - The output will contain a word containing alternating sequence of ‘C’ and ‘V’.
It is not permissible to have two or more consecutive V or C in Sequence.
Letters will be only(a-z/A-Z)

input = hello 
output = CVCV

Explanation - When we convert the above  "hello" we have CVCCV 
but for the output It is not permissible to have two or more consecutive V or C in Sequence.
so CVCCV changes to CVCV 
 */
#include <bits/stdc++.h>
using namespace std;

void VowelConsonat(string s){
    string res,str;
    for(int i=0;i<s.length();i++){
        char c=s[i];
        auto found=s.find(c);
        if(found==string::npos){
            res+=c;
        }
    }
    cout<<res;
}
int main(){
    string s,res;bool flag=true;
    cin>>s;
    VowelConsonat(s);
}