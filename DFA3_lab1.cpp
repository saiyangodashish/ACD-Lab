//Develop a DFA for T={a,b} accepting strings with 'aab' as a substring.
#include<bits/stdc++.h>
using namespace std;

int main(){
	string strings;
	cout<<"\nEnter the string: ";
    getline(cin,strings);

	string object (strings);
 
    string subject ("aab");
 
 
 
    size_t found = object.find(subject);
 
  if (found != string::npos)
 
    cout << "\nfirst 'aab' found at: " << found <<" thus, string accepted!"<<endl;
  else
    cout<<"\n String not accepted!";
 
 
 
  return 0;
}