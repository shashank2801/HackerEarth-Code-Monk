#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin>>t;
	int B=7,A=0;
	while(t--)
	{
		cin >> n;
		int distancex,distancey;
		distancex = abs(A-n);
		distancey = abs(B-n);
		//cout << distancex << " " << distancey << endl;
		if(distancex <= distancey)
		{
			A=n;
			cout << 'A' <<endl;
		}
		else
		{
			B=n;
			cout << 'B' <<endl;
		}
	}
return 0;
}
