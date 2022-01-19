/* 
The FS Faculty  wants to send one of his best coding group to  a Coding competition
There are several groups of coding students. 
He has the marks of the students who have attended fs classes so far. 
He wants to choose the group of students with the highest overall marks.
The marks of the students is the sum of marks of all the students in the group. 

However, the coding groups is not allowed to have issues. 
A issue exists if a younger coder has a strictly higher marks than an older coder. 
A issue does not occur between coders of the same age.

Given two lists, marks and ages , where each marks[i] and ages[i] represents the marks and age of the
i coder, respectively, return the highest overall marks of all possible coding groups

The first line of input containts the marks followed by ages of the students 

input=1 3 5 10 15
1 2 3 4 5
output=34

Explanation: You can choose all the students. 


Input= 4 5 6 5 
2 1 2 1
Output = 16

Explanation: It is best to choose the last 3 coders. 
Notice that you are allowed to choose multiple students of the same age.



Input= 1 2 3 5
8 9 10 1
Output= 6
Explanation: It is best to choose the first 3 coders.

 */
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

void topCoderSum(vi& marks,vi& ages){
    int current_max=0,global_max=INT_MIN,age_so_far=0;
    for(int i=0;i<marks.size();i++){
        if(marks[i]<=marks[i]+current_max){
            if(ages[i]>=age_so_far){
                current_max=max(current_max,current_max+marks[i]);
                global_max=max(global_max,current_max);
            }else{
                current_max+=marks[i];
                global_max=max(global_max,current_max);
            }
        }else{
                current_max=marks[i];
                age_so_far=ages[i];
                global_max=max(global_max,current_max);
            }
    }
    cout<<global_max;
}

int main(){
    string m,a;vi marks,ages;
    int num;
    getline(cin,m);
    stringstream ss(m);
    while(ss>>num){
        marks.push_back(num);
    }getline(cin,a);
    stringstream sa(a);
    while(sa>>num){
        ages.push_back(num);
    }
    topCoderSum(marks,ages);
    return 0;
}