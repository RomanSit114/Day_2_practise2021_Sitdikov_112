// Task 1,2 Sitdikov M3O-112Б-20 29.06.2021
#include <iostream>
using namespace std;

void check(int n, int size) {
			if (size < n || n<=0 || size <=0) {
		cout << "Wrong information";
		exit(0);
	}
}

void deleteFromMas(int* source, int n, int size) {
    cout << "Massive before sorting: " <<endl;
	for (int i = 0; i < size; i++) {
		cout << source[i] << " " ;
	}
	cout <<endl;
	for (int i = n - 1; i < size - 1; i++) {
		source[i] = source[i + 1];
	}
	source[size - 1] = 0;
	cout << "Massive after sorting:  " <<endl;
	for (int i = 0; i < size; i++) {
		cout << source[i] << " ";
	}
}


int main()
{
	int s, d;// s - size of array, d -  number of array you want to delete
	cout << "Enter the size of array: ";
	cin >> s;
	cout << "Enter the number of array you want to delete: ";
	cin >> d;
	check (d, s);
	int mas[s];
	cout << "Enter massive:" << std::endl;
	for (int i = 0; i < s; i++) {
		cin >> mas[i];
	}
	deleteFromMas(mas, d, s);
	return 0;
}

//Патч №1

//Патч №2

//Патч №3

//Патч №4
