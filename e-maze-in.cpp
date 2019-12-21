#include <iostream>
#include<string.h>

using namespace std;

int main(){
	int xaxis=0,yaxis=0;
	string ins;
	cin >> ins;
	for(int i=0;i<ins.length();i++)
	{
		if(ins.at(i)=='L')
		xaxis--;
		else if(ins.at(i)=='R')
		xaxis++;
		else if(ins.at(i)=='U')
		yaxis++;
		else if(ins.at(i)=='D')
		yaxis--;
	}
	cout << xaxis << " " << yaxis;
return 0;
}

