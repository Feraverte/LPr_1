#include <iostream>

void swap(int& a, int& b) { // ������� ��� ����������� ��������� ����� �����.
	int temp = a;
	a = b;
	b = temp;
}

void selectionSort(int* num, int size)
{
	int min, temp; // ��� ������ ������������ �������� � ��� ������
	for (int i = 0; i < size - 1; i++)
	{
		min = i; // ���������� ������ �������� ��������
		// ���� ����������� ������� ����� ��������� �� ����� i-���
		for (int j = i + 1; j < size; j++)  // ��� ��������� ��������� ����� i-���
		{
			if (num[j] < num[min]) // ���� ������� ������ ������������,
				min = j;       // ���������� ��� ������ � min
		}
		temp = num[i];      // ������ ������� i-�� � ����������� ��������
		num[i] = num[min];
		num[min] = temp;
	}
}

int main()
{
	const int size = 50; // visual studio � ������ ����� const ��� �������� �������� �� ��������.
	int mas[size];
	int maxel = -1;

	for (int i = 0; i < size;) {
		mas[i] = rand() % 99 + 1;
		if (mas[i] % 2 != 0) {
			i++;
		}
	}

	selectionSort(mas, 50);

	for (int j = 0; j < size; j++) {
		std::cout << mas[j] << ' ';
	}
}

//	for (int sortmasi = 0; sortmasi < size - 1; sortmasi++) {
//		for (int sortmasj = 0; sortmasj < size - sortmasi - 1; sortmasj++){
//			if (mas[sortmasj] > mas[sortmasj + 1]) {
//				swap(mas[sortmasj], mas[sortmasj + 1]);
//			}
//		}
//	} // ���������� ���������.