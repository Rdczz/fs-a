/* 
Given three integer arrays arr1, arr2 and arr3 sorted in strictly increasing order, 
return a sorted array of only the integers that appeared in all three arrays in increasing order

For any other Boundary Conditions Print -1 
Assume all the three input array contains positive elements 

The first line of input contains the first array elements followed by second array elements followed by third array elements 

input =
1 2 3 4 5 11 15
1 2 5 7 
1 3 4 5 8 20 45 55
output = 
1 5

Explanation: Only 1 and 5 appeared in the three arrays.


input = 
3 4 4 5 6 7
40 50 60 70 80 90
500 600
output = -1


input = 
1 1 1 2
1 1 
1 2 3 4 5
output = 1
 */
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vector<int>>
void intersectionOfArrays(vvi& a){
    for(int i=1;i<a.size();i++){
        a[0].erase(set_intersection(a[0].begin(),a[0].end(),a[i].begin(),a[i].end(),a[0].begin()),a[0].end());
        for(auto it:a[0]){
            cout<<it<<" ";
        }cout<<endl;
    }
    if(a[0].size()){
        for(auto it:a[0]){
            cout<<it<<" ";
        }
    }else{
        cout<<"-1";
    }
}

int main(){
    vvi a;
    string s;int num;
    for(int i=0;i<3;i++){
        vi temp;
        getline(cin,s);
        stringstream ss(s);
        while(ss>>num){
            temp.push_back(num);
        }
        a.push_back(temp);
    }
    intersectionOfArrays(a);
}