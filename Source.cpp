#include <iostream>

using namespace std;
int main()
{
	int m, sum = 0, n, v;
	int array1[50][50][50] = {};
	cout << " Create array" << endl;
	cout << " Enter row:";
	cin >> m;
	cout << " Enter columns:";
	cin >> n;
	cout << " Enter height:";
	cin >> v;
	cout << endl << " Enter meaning for an array:" << endl;
	for (int i = 0; i < m; i++) {
		cout << endl;
		for (int j = 0; j < n; j++) {
			cout << endl;
			for (int k = 0; k < v; k++) {
				cin >> array1[i][j][k];
			}
		}
	}
	for (int i = 0; i < m; i++) {
		cout << endl;
		for (int j = 0; j < n; j++) {
			cout << endl;
			for (int k = 0; k < v; k++) {
				cout << array1[i][j][k];
			}
		}
	}
	for (int i = 0; i < m; i++) {
		cout << endl;
		for (int j = 0; j < n; j++) {
			cout << endl;
			for (int k = 0; k < v;k++) {
				sum = sum + array1[i][j][k];
			}
		}
	}
	cout << " Sum of array equal to " << sum;



	return 0;
}