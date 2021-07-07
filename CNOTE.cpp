#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testcase;
	cin >> testcase;
	while(testcase--){
	    int X, Y, K, N;
	    cin >> X >> Y >> K >> N;
	    int required_pages = X - Y;
	    bool isLuckyChef = false;
	    int P, C;
	    for(int i=0; i<N; i++){
	        cin >> P >> C;
	        if(P>=required_pages && C<=K){
	            isLuckyChef = true;
	           // break; doesn't pass subtasks. so commented out.
	        }
	    }
	    if(isLuckyChef){
	        cout << "LuckyChef" << endl;
	    }else{
	        cout << "UnluckyChef" << endl;
	    }
	}
	return 0;
}
