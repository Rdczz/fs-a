/*Gene and Minne are playing with the words. 
Minne is always sure that his word will be equal to the Genes word, after moving few letters of the Genes word to the end.
Help Minne to solve the problem.

The first line of input contains the Genes word followed by Minne word. 
If it matches print true else print false


Sample Test Case - 1
input = abcde 
eabcd
output = true 


After performing the Genes word abcde-bcdea-cdeab-deabc-eabcd.


Sample Test Case - 2
input = abcdef
fedcba
output = false

Explanation -
After performing the Genes word  abcdef bcdefa cdefab defabc efabcd fabcde 
which doesnt match with the Minne word so the output is false 


*/
#include <bits/stdc++.h>
using namespace std;

string ShiftByOne(string s){
    string temp="";
    temp+=s[s.length()-1];
    for(int i=0;i<s.length()-1;i++){
        temp+=s[i];
    }
    return temp; //abcdef bcdefa
}
bool GeneMinne(string s1,string s2){
    int count=1;string temp=s1;
    while(count<s1.length()){
        if(s2.compare(temp)==0){
            return true;
        }else{
            temp=ShiftByOne(temp);
            count++;
        }
    }
    return false;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(GeneMinne(s1,s2)){
        cout<<"true";
    }else{
        cout<<"false";
    } 

}