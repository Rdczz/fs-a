/* 
Vikram a third class boy plays with a numbers, he will be given a number(n) and 
he starts writing the numbers on each line until he reaches the number(n).

Write the code and verify if the vikrams writing of the number is same or not. 

Assume n>=1


input = 5
output =
1
1 2
3 5 8
13 21 34 55
89 144 233 377 610


input = 4
output = 
1
1 2
3 5 8
13 21 34 55


 */
#include <bits/stdc++.h>
using namespace std;
void pattern(int n){
    int current=1,temp=1,result;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            result=current+temp;
            cout<<current<<" ";
            current=temp;
            temp=result;
        }cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pattern(n);
    return 0;
}