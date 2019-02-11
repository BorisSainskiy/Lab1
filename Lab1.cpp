#include <iostream>
using namespace std;
int main () 
{
	int n, value , count = 0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> value;
	for (int i = 0; i < n; i++) {
		if (a[i] == value) {
			count ++;
		}
	}
	cout << count;
}
