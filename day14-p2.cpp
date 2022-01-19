/* write a  java program to count the GrandChild/Child for given name

Assume the relations here limit only to child and grandChild only
all the inputs will be given in lower case characters(a-z) and are valid relations

the first line of input consists of number of relations followed by child name and fathers name seperated by ','
followed by a name.



Where the first string is "Child", second string is "Father".
If the given name is Father print the count of his children
If the given name is GrandFather print the count of his GrandChildren

Print -1 for any other boundary conditions

for given input like this

input =
5
kishore,ramesh
dev,gopal
gopal,ramu
srinu,gopal
praveen,ranjit
ramu
output = 2

And given input "ramu" we have to find his no of grandchildren/child
Here "ramu" has one direct child gopal and gopal has 2 children(dev,srinu).
So ramu has 2 grand children dev,srinu. so output is 2

example:2

input =
5
ranjit,knr
ramesh,pradeep
kittu,ranjit
yogesh,ranjit
praveen,ranjit
knr
output=
3

//given data for knr we need print the count of grand children .
here knr direct child is ranjit and ranjit has three children   ---- kittu,yogesh,praveen so print 3


input =
8
a,b
c,b
d,b
f,a
g,a
e,a
m,c
z,d
b
output =
5
 */
#include <bits/stdc++.h>
using namespace std;
#define vs vector<string>
#define relations multimap<string,string>

int NoOfGrandChild(relations& r,string start_name){
    int child=r.count(start_name);int sum=0;
    if(child>0){
        for(auto it=r.begin();it!=r.end();it++){
        if(it->first==start_name){
            sum+=r.count(it->second);
            if(sum==0){
                sum=child;
            }
        }
    }
    return sum;
    }
    return -1;
}
int main()
{
    string s,name,start_name;relations r;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        vs names;
        cin>>s;
        stringstream ss(s);
        while (getline(ss, name, ','))
        {
            names.push_back(name);
        }
        r.insert({names[1],names[0]});
    }
    cin>>start_name;
    cout<<NoOfGrandChild(r,start_name);
    return 0;
}