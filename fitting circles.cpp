#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int l,b,number;
		cin >> l >> b;
		number = l>b? (l/b) : (b/l);
		cout << number << endl;
	}
return 0;
}
