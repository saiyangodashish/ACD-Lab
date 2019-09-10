//Develop a DFA for T={a,b} accepting strings starting with 'ab' and ending 'b'.
#include<bits/stdc++.h>
using namespace std;

int main(){
	string strings;
	cout<<"\nEnter the string: ";
    getline(cin,strings);

	string object (strings);
 
    string subject ("ab");
 
    int l=strings.length();
 
    size_t found = object.find(subject);
 
  if (found==0){
      char ch;
      ch=strings.at(l-1);
      if (ch=='b')
      	cout<<"\bString accepted!"<<endl;
  }
  else
    cout<<"\n String not accepted!"<<endl;
 
 
 
  return 0;
}