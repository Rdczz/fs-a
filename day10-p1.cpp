/* Steve is Designing a New email system.Where he wants to eliminate the gamil  based on few conditions. 

Every valid email consists of a local name and a domain name, in between '@'; 
For example, in "alice@gmail.com" , "alice" is the local name, and "gmail.com" is the domain name.

Besides lowercase letters, the email may contain one or more '.' or '+' .

If you add periods '.' between some characters in the local name part of an email address, mail sent there will be forwarded to
the same address without dots in the local name. 


For example, "alice.z@gmail.com" and "alicez@gmail.com" forward to the same email address.
If you add a plus '+' in the local name, everything after the first plus sign will be ignored. 
This allows certain emails to be eliminated.
This rule will not be applicable to  to domain names.


For example, "m.y+name@email.com" will be forwarded to "my@email.com" .
It is possible to use both of these rules at the same time.


Help Steve to solve the problem 
He will be given an group of email-ids where we send one email to each emails[i], return the number of different addresses that
actually receive mails.


Sample Test Case 
Input =test.email+alex@gmail.com  test.e.mail+bob.cathy@gmail.com  testemail+david@gm.ail.com
Output: 2

Explanation: "testemail@gmail.com" and "testemail@gm.ail.com" actually receive mails.


Example 2:
Input: emails =a@gmail.com b@gmail.com c@gmail.com
Output: 3

 */
#include <bits/stdc++.h>
using namespace std;

void UniqueMails(string all_mails){
    vector<string> mails,mails_sorted;
    string mail;
    stringstream ss(all_mails);
    while(getline(ss,mail,' ')){
        mails.push_back(mail);
    }
    for(auto it:mails){
        string result;
        size_t index=it.find("@");
        if(index!=string::npos){
            size_t found=it.find("+");
            if(found!=string::npos){
                string str=it.substr(0,found-1);
                str.erase(remove(str.begin(),str.end(),'.'),str.end());
                result+=str;
                result+=it.substr(index,it.length()-index);
                mails_sorted.push_back(result);
            }else{
                string str=it.substr(0,index);
                str.erase(remove(str.begin(),str.end(),'.'),str.end());
                result+=str;
                result+=it.substr(index,it.length()-index);
                mails_sorted.push_back(result);
            }
        }
    }
    set<string> s(mails_sorted.begin(),mails_sorted.end());
    cout<<s.size();
}

int main(){
    string all_mails;
    getline(cin,all_mails);
    UniqueMails(all_mails);
    return 0;

}