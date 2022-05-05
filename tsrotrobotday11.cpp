#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a, b;
	    cin >> a >> b;
	    string s;
	    cin >> s;
	    int sum = 0, minn = 0, maxx = 0;
	    for(int i = 0; i<a; i++){
	        if(s[i] == 'L'){
	            sum -= 1;
	            minn = min(sum, minn);
	        }
	        else{
	            sum += 1;
	            maxx = max(sum, maxx);
	        }
	    }
	    cout << maxx - minn + 1 << endl;
	}
	return 0;
}
