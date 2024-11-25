#include <iostream>
using namespace std;
int main() {
	cout << "kiem tra so co phai so nguyen to khong!\n";
	
	int so;
	cout << "nhap so: "; cin >> so;
	int dem = 0;
	
	for (int i = 1; i <= so; i++)
	{
		if (so % i == 0)
		{
			dem++;
		}

	}
	cout << " so dem = " << dem << endl;
	if (dem == 2) {
		cout << "so " << so << " la so nguyen to\n";
	}
	else {
		cout << "so " << so << " KHONG PHAI la so nguyen to\n";

	}
	return 0;
}