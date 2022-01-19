/* 

In a South Africa Class room, each student has a name with a single character. 
Initally all the students names will be given. The teacher now wants the students 
to be shuffled, so that two students names that are adjacent to each other are not same. 

If the names can be shuffled in such a way print yes else  prints no. 

input=ddt
output=yes


Explanation -the student names can be shuffled as dtd


input=rrrt
output=no

Explanation - the studens names after shuffling will have same student names adjacent to each other 


 */
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int> 
#define si set<int>
class Solution{
    public:
    bool ShuffleStudents(string s){
        si res(s.begin(),s.end());vi nums;
        for(auto it:res){
            int c=count(s.begin(),s.end(),it);
            nums.push_back(c);
        }
        int m=*max_element(nums.begin(),nums.end());
        if(m<=s.length()-m+1){
            return true;
        }
        return false;
    }
};

int main(){
    string s;
    cin>>s;
    Solution Sol=Solution();
    if(Sol.ShuffleStudents(s)){
        cout<<"true";
    }else{
        cout<<"false";
    };
    return 0;
}
