//Develop a DFA for T={a,b} accepting strings with 'abba' as a substring.
#include<bits/stdc++.h>
using namespace std;

int main(){
	string strings;
	cout<<"\nEnter the string: ";
    getline(cin,strings);

	string object (strings);
 
    string subject ("abba");
 
 
 
    size_t found = object.find(subject);
 
  if (found != string::npos)
 
    cout << "\nfirst 'abba' found at: " << found <<" thus, string accepted!"<<endl;
  else
    cout<<"\n String not accepted!";
 
 
 
  return 0;
}