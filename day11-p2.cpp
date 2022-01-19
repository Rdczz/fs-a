/* True Or False 

Shyam is given series of  Statements
T represents True, F represents False. 

Initially all the statements will be False.
He can change from T to F or F to T . 
If he starts at one Statement, the process has to continue upto end of the statement.
He can start at any part of the Statement. 
If it is 'F' it changes to 'T' and if it is 'T' it changes to 'F'. 
He has to do minimum number of swaps on the Initial Statement to reach the given target state


Input = TFTTT
output = 3

Explanation - Initially FFFFF
Change from the Third Statement FFTTT
Change from the First Statement TTFFF
Change from the Second Statement  TFTTT

 */

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int PossibleSwaps(string s){
            string res(s.length(),'F');int c=0;
            cout<<res<<endl;
            for(int i=0;i<s.length();i++){
                for(int j=i;j<s.length()-i;j++){
                    string str;
                    if(res[j]!=s[j]){
                        if(s[j]=='F'){
                            string str(s.length()-j,'F');
                            res.replace(j,s.length()-j,str);
                            c++;
                        }else if(s[j]=='T'){
                            string str(s.length()-j,'T');
                            res.replace(j,s.length()-j,str);
                            c++;
                        }
                    }
                }
            }
            return c;
        }
};

int main(){
    string s;
    cin>>s;
    Solution sol=Solution();
    cout<<sol.PossibleSwaps(s);
    return 0;
}