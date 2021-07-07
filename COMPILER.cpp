#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int testcase;
	cin >> testcase;
	while(testcase--){
	    int counter = 0;
	    stack<char> st;
	    string str;
	    cin >> str;
	    for(int i=0; i<str.length(); i++){
	       if(str[i] == '<'){
	           st.push(str[i]);
	       }else{
	           if(st.empty()){
	               break;
	           }else{
	               st.pop();
	               if(st.empty()){
	                   counter = i+1;
	               }
	           }
	       }
	    }
	    cout << counter << endl;
	}
	return 0;
}
