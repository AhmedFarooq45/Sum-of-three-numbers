/*Ahmed Farooq
BSEF20A045
Afternoon
Task3*/
#include <iostream>
using namespace std;
int main() {
	int n, sum, ans;
	sum = 0;
	cout << "Enter a three digit positive number" << endl;
	cin >> n;
	ans = n % 10;
	sum = sum + ans;
	n = n / 10;
	ans = n % 10;
	sum = sum + ans;
	n = n / 10;
	ans = n % 10;
	sum = sum + ans;
	n = n / 10;
	cout << " Sum  of three digit number is ";
	cout << sum;
	




	return 0;
}