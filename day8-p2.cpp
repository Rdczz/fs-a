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
void pattern(int n){
    int rows=n,cols=n,c=0;
    int arr[n][n];
    /* s=n*(n+1)/2; */
}
int main(){
    int n;
    cin>>n;
    pattern(n);
    return 0;
}