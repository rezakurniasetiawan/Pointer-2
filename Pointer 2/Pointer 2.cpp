#include <conio.h>
#include <iostream>

using namespace std;
void binary(int desimal);

void binary(int desimal)
{
	int sisa;
	int hasil;

	// POINTER

	int* a = &sisa;
	int* b = &hasil;

	if (desimal <= 1)
	{
		cout << desimal;
		return;
	}
	*a = desimal % 2;
	*b = desimal / 2;
	binary(hasil);
	cout << sisa;
}

int main()
{
	int a;

	// POINTER 

	int* x = &a;

	cout << "Masukkan Bilangan yang akan dikonversi : ";
	cin >> a;
	cout << "Alamat yang dikonversi :" << &a;
	cout << a << " dalam biner adalah ";
	binary(a);
	cout << endl;

	system("pause");
	return 0;

}