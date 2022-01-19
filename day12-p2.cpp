/* Pythagoras a mathematicians is playing with a group of numbers which contains distinct numbers(>0),
He finds the number of valid quadruples that can be formed with the given numbers.

The rules to check if it is a valid qudraples are as follows:
    - It contains 4 numbers a, b, c, d
    where a*b = c*d  and a != b != c != d

If He is not able to do so, he prints 0 


Write the code to check if the Pythagoras is correct or not. 

The first line of input consists of the group size followed by group numbers 

Input =5
3 2 4 1 6
output= 16

Explanation:
-------------
There are 16 valid Quadrules:
(2,3,1,6) , (2,3,6,1) , (6,1,3,2) , (6,1,2,3)
(3,2,1,6) , (3,2,6,1) , (1,6,3,2) , (1,6,2,3)
(2,6,3,4) , (2,6,4,3) , (6,2,3,4) , (6,2,4,3)
(3,4,2,6) , (4,3,2,6) , (3,4,6,2) , (4,3,6,2)


Sample Input-2:
---------------
4
2 3 5 7

Sample Output-2:
----------------
0
 */

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define map map<int,int>
class Solution{
    public:
    void Quadraples(vi &nums){
        map res;int temp,c=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                temp=nums[i]*nums[j];
                if(!res[temp]){
                    res[temp]=1;
                }else{
                    c+=8*res[temp];
                    res[temp]+=1;
                }
            }
        }
        cout<<c;
    }
};
int main(){
    vi nums;int n,num;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        nums.push_back(num);
    }
    Solution sol=Solution();
    sol.Quadraples(nums);
    return 0;
}   