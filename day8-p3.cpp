/* 
Ramu a School boy given a number 'n' writes it vertically down and writes up again verically up (n-1) lines in increasing order of 1.
He Repeats the above process continously. 


input = 5
output =
1
2 9
3 8 10
4 7 11 14 
5 6 12 13 15



input = 6
output = 
1
2 11
3 10 12
4 9 13 18
5 8 14 17 19
6 7 15 16 20 21
 */
#include <bits/stdc++.h>
using namespace std;

void Pattern(){
    int num,n;
    cin>>n;
    vector<vector<int>> res;
    for(int i=0;i<n;i++){
        vector<int> temp;
        for(int j=0;j<n;j++){
            cin>>num;
            temp.push_back(num);
        }
        if(i%2==0){
            reverse(temp.begin(),temp.end());
            res.push_back(temp);
        }else{
            res.push_back(temp);
        }
    }   
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[0].size();j++){
            cout<<res[i][j]<<" ";
        }
    }
}

int main(){
    int n;
    Pattern();
    return 0;
}