/* A Gold  merchant, announced an offer that they will charge the minimum price to make all the 
gold coins into one.

Customers who has different weights of gold coins wants to utilize the offer.

The processing charge to make two coins into one is calculated as follows:
	- To make two coins of weights A and B into one coin, 
	  you have to pay the amount 'A + B'. 

Your task is to help Gold Merchant to keep his promise and 
to charge the minimum amount to  gold coins
into one gold coin

Input Format:
-------------
Single line of space separated integers, number on the boxes.

Output Format:
--------------
Print an integer, minimum amount to be paid by Customer


Sample Input-1:
---------------
4 3 6

Sample Output-1:
----------------
20


Sample Input-2:
---------------
5 2 4 3 6

Sample Output-2:
----------------
45 */

#include <bits/stdc++.h>
using namespace std;
#define vi list<int>

void MinAmount(string s){
    s.erase(remove(s.begin(),s.end(),' '),s.end());
    vi res;int num,sum=0;
    for(auto it:s){
        res.push_back(it);
    }
    sort(res.begin(),res.end());
    sum+=res.front();
    res.pop_front();
    while(res.size()>=1){
        sort(res.begin(),res.end());
        sum+=res.front();
        res.pop_front();
        res.push_front(sum);
    }
    cout<<sum;
}

int main(){
    string s;
    getline(cin,s);
    MinAmount(s);
    return 0;
}