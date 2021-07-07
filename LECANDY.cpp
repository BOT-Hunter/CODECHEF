#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int no_of_testcase;
	int N, C;
	cin >> no_of_testcase;
	for(int i=0; i<no_of_testcase; i++){
	    cin >> N >> C;
	    int arr[N];
	    for(int j=0; j<N; j++){
	        cin >> arr[j];
	    }
	    for(int j=0; j<N; j++){
	        C -= arr[j];
	    }
	    if(C >= 0){
	        cout << "Yes" << endl;
	    }else{
	        cout << "No" << endl;
	    }
	}
	return 0;
}
