#include <iostream>
#include <string.h>

using namespace std;

int main(){
	string x;
	int k,i=0;
	cin >> x >> k;
	while(k--){
		if(x.at(i) == '9')
		{
			i++;k++;
		continue;
		}
		
		else{
		x.at(i) = '9';
		i++;
		}
	}
	cout << x << endl;
return 0;
}
