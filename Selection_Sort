// this program takes a string and print it in ascending order(depending on the ascii values of each index)
// time complexity is O(n^2)\
//The idea of selection sort is rather simple:
//we repeatedly find the next largest (or smallest) element in the array and move it to its final position in the sorted array.

#include <bits/stdc++.h>
using namespace std;

int main(){
	
	string s;
	cin >> s;
	
	for(int i = 0; i < s.length()-1; i++){ // we need to do length - 2 passes
		
		int imin = i; // ith position: elements from i till lenght-1 are candidates
		
		for(int j = i + 1; j < s.length(); j++){
	
			if(s[j] < s[imin])
				imin = j; // updates the index of the minimum index
	
		}
	
		if(imin != i){
	
			swap(s[imin],s[i]);
	
		}
	
	}
	
	for(int i = 0 ; i < s.length(); i++) cout << s[i];
	
	return 0;
}
