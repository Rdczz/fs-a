/* A Group of Monsters has few powers. 
The powers are represented in numbers both positive and negative. 
Each Member of the monster prays to get some power. 
God sanctions only one member of the Monster Group. 
The power can be performed only once on only one member of the monster. 
God will multipy the monster power with the same power. 
After  performing the above action, a sub-group of monsters check the power they have.
We have to now see which sub-group has the highest power. Print the Highest Sub-Power.


The first line of input contains the powers of the monsters. 

input = 4 -1 -5 -3
output = 28

The power operation is performed on the third monster, -5 * -5 which is 25 

Now the sub group with highest power is 4+(-1)+25 = 28 

 */
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int> 
class Solution{
    public:
    void HighestPower(string s){
        stringstream ss(s);vi res;
        int num;
        while(ss>>num){
            res.push_back(num);
        }
        vi prod(res.begin(),res.end());
        for_each(prod.begin(),prod.end(),[](int&x){x=x*x;});
        int index=distance(prod.begin(),max_element(prod.begin(),prod.end()));
        res[index]=prod[index];
        int max_ending_here = 0, max_so_far = INT_MIN;
        for (int i = 0; i < res.size(); i++) {
            if (res[i] <= max_ending_here + res[i]) {
                max_ending_here += res[i];
            }
            else {
                max_ending_here = res[i];
            }
            if (max_ending_here > max_so_far)
                max_so_far = max_ending_here;
        }
        cout<<max_so_far;
    }
};

int main(){
    string s;
    getline(cin,s);
    Solution sol=Solution();
    sol.HighestPower(s);
    return 0;
}