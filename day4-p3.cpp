#include <bits/stdc++.h>
using namespace std;

vector<int> NewspaperPuzzle(vector<vector<int>>& v,string s){
    char a;int index=0;
    a=s[index];
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            
        }
    }
}
int main(){
    vector<vector<int>> v;vector<int> res;
    string s;
    int row,col,num;
    cin>>row>>col;
    for(int i=0;i<row;i++){
        vector<int> temp;
        for(int j=0;j<col;j++){
            cin>>num;
            temp.push_back(num);
        }
        v.push_back(temp);
        temp.clear();
    }
    cin>>s;
    res=NewspaperPuzzle(v,s);
    return 0;

}