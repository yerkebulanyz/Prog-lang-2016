#include <iostream>

using namespace std;

int main() {
	
	int n;
	cin >>n;
	int a[n];
	for ( int i = 1 ; i <= n; i++) {
		cin >>a[i];
	}
		for (int i = 1; i <= n; i++) {
          int j = n - i + 1; 
          if (j < i) {
          break; } 
          int x = a[i];
          int y = a[j];
		  a[i] = y;	
		  a[j] = x;
		 }
	   	for ( int i = 1 ; i <= n; i++) {
	   		cout <<a[i]<<" ";
	   	}
	   	return 0;
}
 	