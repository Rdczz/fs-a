#include <bits/stdc++.h>
using namespace std;

int ShoppingPortal(string s,map<char,int>& m){
    set<char> cs(s.begin(),s.end());int n=cs.size(),c,total=0;
    for(auto x:cs){
        c=count(s.begin(),s.end(),x);
        if(c<=2){
            total+=m[x]*c;
        }else if(c==3){
            total+=m[x]*2;
        }else{
            if(c%2==0){
                total+=m[x]*((c/2)+1);
            }else{
                total+=m[x]*((c/2)+2);
            }
        }
    }  
    return total;
}
int main()
{
    string s;
    map<char, int> m;
    int num;
    cin >> s;
    for (char c = 'A'; char(c) <= 'Z'; c++)
    {
        cin >> num;
        m.insert(pair<char, int>(c, num));
    }
    cout<<ShoppingPortal(s,m);
    return 0;
}