#include <bits/stdc++.h>
using namespace std;

string ClockConvert(string s){
    string hr,merid;
//    s.erase(remove(s.begin(),s.end(),':'),s.end());
    hr=s.substr(0,2);
    merid=s.substr(s.length()-2,2);
    if(merid=="PM"){
        if(hr=="12"){
            s.replace(0,2,"12");
            s.resize(8);
        }else{
            int temp=stoi(hr);string t;
            temp+=12;
            t=to_string(temp);
            s.replace(0,2,t);
            s.resize(8);

        }
    }else if(merid=="AM"){
        if(hr=="12"){
            s.replace(0,2,"00");
            s.resize(8);
        }else{
            s.resize(8);
        }
    }
    return s;
}
int main(){
    string s;
    cin>>s;
    cout<<ClockConvert(s);
    return 0;
}