#include <iostream>

void swap(int& a, int& b) { // функция для перемещения элементов между собой.
	int temp = a;
	a = b;
	b = temp;
}

void selectionSort(int* num, int size)
{
	int min, temp; // для поиска минимального элемента и для обмена
	for (int i = 0; i < size - 1; i++)
	{
		min = i; // запоминаем индекс текущего элемента
		// ищем минимальный элемент чтобы поместить на место i-ого
		for (int j = i + 1; j < size; j++)  // для остальных элементов после i-ого
		{
			if (num[j] < num[min]) // если элемент меньше минимального,
				min = j;       // запоминаем его индекс в min
		}
		temp = num[i];      // меняем местами i-ый и минимальный элементы
		num[i] = num[min];
		num[min] = temp;
	}
}

int main()
{
	const int size = 50; // visual studio с типами кроме const при создании массивов не работает.
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
//	} // сортировка пузырьком.