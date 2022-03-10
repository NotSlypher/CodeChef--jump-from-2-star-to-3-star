#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vii vector<vector <int>>

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		//for any given i except i = 1, i + 1 is not divisible by i; hence 2 3 4 ... 1 
		for (int i = 1; i < n; ++i)
			cout << i + 1 << " ";
		cout << 1 << endl;
	}
	return 0;
}
