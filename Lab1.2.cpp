#include <iostream>
using namespace std;
int main()
{
	int n, n1;
	cin >> n >> n1;
	int a[n], a1[n1];
	for ( int i = 0; i < n; i ++) {
	cin >> a[i];
	}
	
	for ( int i = 0; i < n1; i ++) {
	cin >> a1[i];
	}
	
	
	for (int i = 0; i < n1; i++) {
		int l = 0, r = n - 1;
		while(true) {
		int	m = (l + r) / 2;
		if (a1[i] == a[m]) {
			cout << "YES" << endl;
			break;
		}
		else if(a1[i] > a[m]) {
			l = m + 1;
		}
		else {
			r = m - 1; 
		}
		if (l > r) {
			cout << "NO" << endl;
			break;
		}
 	}
	}

	return 0;
}
