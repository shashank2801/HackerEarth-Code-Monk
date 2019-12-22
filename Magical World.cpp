#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
	if(n<=1)
	return false;
	if(n<=3)
	return true;
	if(n%2==0 || n%3==0)
	return false;
	
	for(int i=5;i*i<=n;i=i+6)
		if(n%i == 0 || n%(i+2) == 0)
		return false;
	
	return true;
}

int nextPrime(int Nu){
	if(Nu<=1)
	return 2;
	
	int prime = Nu;
	bool found = false;

	while(!found && prime<122){
		prime++;
		if(isPrime(prime))
		found = true;
	}
	//for the corner condition.. if Z then it won't change.
	if(prime == 122)
	prime = 1;
	
return prime;
}

int prevPrime(int Nu){
	if(Nu<=1)
	return -1;
	
	int prime = Nu;
	bool found = false;
	
	while(!found){
		prime--;
		if(isPrime(prime))
		found = true;
	}
	//for corner condition.. cause B will change into A if it doesn't work.
	if(prime == 65)
	prime = 1;
	
return prime;
}

int main(){
	int t,n,d1,d2;
	cin >> t;
	while(t--)
	{
	cin >> n;
	string str;
	cin >> str;
	int x=0,y=0;
	for(int i=0;i<n;i++){
		if(str.at(i) < 65)
		str.at(i) = 67;
		else if(str.at(i) > 122)
		str.at(i) = 113;
		
		if(isPrime(str.at(i)))
		continue;
		
		else{
		int x = nextPrime(str.at(i));
		int y = prevPrime(str.at(i));
		d1 = abs(x-str.at(i));
		d2 = abs(y-str.at(i));
		if(d2<=d1)
		str.at(i) = y;
		else
		str.at(i) = x;
		}
	}
	
	cout << str << endl;
	}
return 0;
}
