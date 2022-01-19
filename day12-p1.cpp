/* Kalpana a third class student is playing with numbers. 
She has given her brother the same set of numbers and asked him to find the 
next greatest nearest number which contains the same set of digits same number of times. 

If no such number exists print -1 

input = 121
output = 211

input = 653
output = -1


input = 456
output = 465


 */
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int NextGreatest(string num){
        for(int i=num.length()-1;i>0;i++){
            int flag=0;
            if(num[i]<num[i-1]){
                swap(num[i],num[i-1]);
                cout<<num<<" ";
                return stoi(num);
            }
        }
        return -1;
    }
};

int main(){
    string s;
    cin>>s;
    Solution sol=Solution();
    cout<<sol.NextGreatest(s);
    return 0;
}