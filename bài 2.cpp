#include <iostream>
#include <cmath>
using namespace std;

void nhapmang(int x, int mangsotunhien[]) {
	for (int i = 0; i < x; i++) {
		cout << " Nhap vao mang so tu nhien phan tu thu " << i + 1 << " la: " << endl;
		cin >> mangsotunhien[i];
	}
}

void sapxepmangtangdan(int x, int mangsotunhien[]) {
	int sotrunggian = 0;
	for (int i = 0; i < x - 1; i++) {
		for (int j = i + 1; j < x; j++) {
			if (mangsotunhien[i] > mangsotunhien[j]) {
				sotrunggian = mangsotunhien[i];
				mangsotunhien[i] = mangsotunhien[j];
				mangsotunhien[j] = sotrunggian;
			}
		}
	}
}

void xuatmang(int x, int mangsotunhien[]) {
	for (int i = 0; i < x; i++) {
		cout << mangsotunhien[i] << "\t";
	}
}

int main() {
	int mangsotunhien[9999];
	int x;
	cout << " Nhap vao so phan tu trong mang " << endl;
	cin >> x;
	nhapmang(x, mangsotunhien);
	sapxepmangtangdan(x, mangsotunhien);
	cout << " Mang so tu nhien sau khi sap xep: " << endl;
	xuatmang(x, mangsotunhien);
	return 0;
}
