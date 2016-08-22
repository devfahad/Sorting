/* https://youtu.be/i-SKeOcBwko watch for more...*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	
	string a;
	cin >> a;
	
	for(int i = 0; i < a.length(); i++){ // we need to do length - 2 passes
		
		int value = a[i];
		int hole = i;
		
		while(hole > 0 && a[hole - 1] > value){
			
			a[hole] = a[hole - 1];
			
			hole = hole - 1;
			
		}
		a[hole] = value;
		
	}
	
	for(int i = 0; i < a.length(); i++)
		cout << a[i];
		
	return 0;
}
