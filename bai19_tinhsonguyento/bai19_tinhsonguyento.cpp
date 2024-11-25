#include <iostream>
using namespace std;
bool(kiemtraSNT(int s)) {
	int dem = 0;
	for (int i = 1; i <= s; i++)
	{
		if (s % i == 0)
		{
			dem++;
		}
	}
	if (dem == 2)
	{
		return true;
	}
	else {
		return false;
	}
}
bool kiemtraSCP(int x) {
	if (sqrt(x) == (int)sqrt(x)) return true;
	return false;
}
int main()
{
	cout << "kiem tra so co phai la so nguyen to khong!\n";

	int so;
	cout << "nhap so: "; cin >> so;

	for (int y = 1; y<= 0; y++)
	{
		if (kiemtraSNT(y) == true) cout << y << " ";
	}
	cout << endl;
	for (int i = 1; i < 100; i++)
	{
		if (kiemtraSCP(i) == true)cout << i << " ";
	}
	return 0;
}
int main() {
	int n;
	int dem = 0;
	cout << "nhap so:\n"; cin >> n;
	for (int y = 1; y <= n; y++)
	{
		if (kiemtraSNT(y) == true) cout << y << " ";
	}
	
	

	/*
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0) {
			dem++;

		}
	}
	//cout << "so dem =" << dem << endl;
	if (dem == 2) {
		cout << "So " << n << " la so nguyen to\n";
	}
	else{
		cout << "So " << n << " khong phai la so nguyen to\n";
	}*/
	return 0;

}
