#include<bits/stdc++.h>
using namespace std;

int partion(int *A, int start, int end)
{
    int pivot = A[end];
    int pIndex = start;

    for(int i=start; i<end; i++){
        if(A[i] <= pivot){
            swap(A[i],A[pIndex]);
            pIndex++;
        }
    }
    swap(A[end],A[pIndex]);
    return pIndex;
}

void quickSort(int *A, int start, int end)
{
    if(start < end){
        int pIndex = partion(A,start,end);
        quickSort(A,start,pIndex-1);
        quickSort(A,pIndex+1,end);
    }
}

int main()
{
	cout << "How many numbers to be sorted?" << endl;
	int n;
	cin >> n;
	cout << "write down the numbers below :" << endl;
	int A[n];
	for(int i = 0; i < n ; i++) cin >> A[i];
	
    quickSort(A,0,n-1);
    for(int i=0; i<n; i++) cout<<A[i]<<" ";
}
