#include <iostream>
using namespace std;
const int SIZE = 10;
void selection_sort(int list[], int n);
void print_list(int list[], int n);
int main131141231()//�����ͷ� �ٲ��!!
{
	int grade[SIZE] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5 };
	// ������ �迭 ���
	cout << "������ �迭" << endl;
	print_list(grade, SIZE);
	selection_sort(grade, SIZE);
	// ���ĵ� �迭 ���
	cout << "���ĵ� �迭" << endl;
	print_list(grade, SIZE);
	return 0;
}

void print_list(int list[], int n)
{
	int *ptr = list;
	int i;
	for (i = 0; i < n; i++)	
		printf("%d ", *(ptr+i));
	printf("\n");

}
void selection_sort(int list[], int n)
{
	int *ptr = list;
	int i, j, temp, least;
	for (i = 0; i < n - 1; i++)
	{
		least = i;
		for (j = i + 1; j < n; j++) // �ּҰ� Ž��
			if (*(ptr+j) < *(ptr+least))
				least = j;
		// i��° ���ҿ� least ��ġ�� ���Ҹ� ��ȯ
		temp = *(ptr+i);
		*(ptr + i) = *(ptr + least);
		*(ptr + least) = temp;
	}
	
}