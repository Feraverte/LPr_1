#include <iostream>

void swap(int& a, int& b) { // functia dlya perestanovki i sortirovki puzirkom.
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	const int size = 50; // visual studio s tipami krome const pri sozdanii massivov ne rabotaet.
	int mas[size];
	int maxel = -1;

	for (int i = 0; i < size;) {
		mas[i] = rand() % 99 + 1;
		if (mas[i] % 2 != 0) {
			i++;
		}
	}

	for (int sortmasi = 0; sortmasi < size - 1; sortmasi++) {
		for (int sortmasj = 0; sortmasj < size - sortmasi - 1; sortmasj++){
			if (mas[sortmasj] > mas[sortmasj + 1]) {
				swap(mas[sortmasj], mas[sortmasj + 1]);
			}
		}
	} // sortirovka puzirkom.

	for (int j = 0; j < size; j++) {
		std::cout << mas[j] << ' ';
	}
}