#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;
	int a[n];
	int s = 0;
	for (int i = 1; i <= n; i++) {
		    cin >>a[i];
	}
		for (int i = 2; i <= n; i++) {
			if (a[i] > a[i-1]) {
				s++;
	 } 
} 
	cout <<s;
	return 0;
} 
  