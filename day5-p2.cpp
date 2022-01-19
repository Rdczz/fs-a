/* There is a board with M*N size. 
The board contains M*N blocks of 1*1 size.
Each block is printed a number on it.

You will be given a number, your task is to find whether the number is printed on 
any of the blocks or not. If found print yes, otherwise print no.

NOTE: 
- The numbers printed on the board in each row are in increasing order. 
- Next row starting number is greater than the last number of the previous row.

Constarint:
-----------
Can you solve it in log(M)+ log(N) time. 


Input Format:
-------------
Line-1 -> Two integers M and N, board size.
Next M lines -> N space separated integers.
Last Line -> An integer T, number to search.

Output Format:
--------------
Print a boolean value, 'yes' if number found.
otherwise, 'no'.


Sample Input-1:
---------------
4 4
1 3 6 10
12 15 19 23
24 28 32 36
37 41 44 47
15

Sample Output-1:
----------------
yes


Sample Input-2:
---------------
4 4
1 3 6 10
12 15 19 23
24 28 32 36
37 41 44 47
26

Sample Output-2:
----------------
no

 */
/* #include <bits/stdc++.h>
using namespace std;

void alphanumeric(string s){
    int c=s.length();
    for(int i=0;i<s.length();i++){
        int temp=count(s.begin(),s.end(),
        s[i]);
        if(temp>1){
            string str(temp,s[i]);
            if(s.substr(i,temp)==str){
                c+=1;
            }
        }
    }
    cout<<c;
}
int main(){
    string s;
    cin>>s;
    alphanumeric(s);
    return 0;
}
 */
#include <bits/stdc++.h>
using namespace std;

/* int fac(int n)
{
    if (n == 0)
        return 1;
    return n * fac(n - 1);
} */
void alphanumeric(string s){
    int c=0,temp=1,ans=1;
    for(int i=1;i<s.length()-1;i++){
        if(s[i]==s[i-1]){
            temp++;
        }else{
            c+=temp*(temp-1)/2;
            temp=1;
        }
    }
    cout<<c+s.length();
}

int main(){
    string s;
    cin>>s;
    alphanumeric(s);
    return 0;
}