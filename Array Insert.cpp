#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	int size,t,x;
	cin >> size >> t;
	int a[size];
	for(int i =0;i<size;i++)
	cin >> a[i];
	while(t--){
		int t,b,c,sum=0;
		cin >> t>> b>> c;
		switch(t){
			case 1: a[b] = c;
					break;
			case 2: for(int j = b;j<=c;j++)
					sum += a[j];
					
					cout << sum << endl;
					break;
		}
	}
return 0;
}
