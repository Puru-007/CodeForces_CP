#include <bits/stdc++.h>
using namespace std;

#define int long long int

void solve() {
    int N;
    cin>>N;
    int arr[N];
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    
    int first = INT_MIN;
    int pos = 0;
    for(int i=0; i<N-1; i++){
        if(arr[i] > first){
            pos = i;
            first = arr[i];
        }
    }
    
    int min1 = arr[N-1];
    
    if((first > min1)) {
        cout<<"YES"<<endl;
        return;
    }
    else{
        for(int i=N-1; i>=1; i--){
            if(arr[i] < arr[i-1]){
                cout<<"YES"<<endl;
                return;
            }
        }
        cout<<"NO"<<endl;
    }
    
}

int32_t main() {
	int T;
	cin>>T;
	while(T--){
	    solve();
	}
	
	return 0;
}



// A. Sorting Parts
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// You have an array a of length n. You can exactly once select an integer len between 1 and n−1 inclusively, and then sort in non-decreasing order the prefix of the array of length len and the suffix of the array of length n−len independently.

// For example, if the array is a=[3,1,4,5,2], and you choose len=2, then after that the array will be equal to [1,3,2,4,5].

// Could it be that after performing this operation, the array will not be sorted in non-decreasing order?

// Input
// There are several test cases in the input data. The first line contains a single integer t (1≤t≤100) — the number of test cases. This is followed by the test cases description.

// The first line of each test case contains one integer n (2≤n≤104) — the length of the array.

// The second line of the test case contains a sequence of integers a1,a2,…,an (1≤ai≤109) — the array elements.

// It is guaranteed that the sum of n over all test cases does not exceed 104.

// Output
// For each test case of input data, output "YES" (without quotes), if the array may be not sorted in non-decreasing order, output "NO" (without quotes) otherwise. You can output each letter in any case (uppercase or lowercase).

// Example
// inputCopy
// 3
// 3
// 2 2 1
// 4
// 3 1 2 1
// 5
// 1 2 2 4 4
// outputCopy
// YES
// YES
// NO
// Note
// In the first test case, it's possible to select len=1, then after operation, the array will not be sorted in non-decreasing order and will be equal to [2,1,2].

// In the second test case, it's possible to select len=3, then after operation, the array will not be sorted in non-decreasing order and will be equal to [1,2,3,1].

// In the third test case, the array will be sorted in non-decreasing order for every possible len.