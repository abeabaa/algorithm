#include "sort.h"
#include <algorithm>
#include <iostream>

void bubblesort(int list[],int n)
{
	for (int i = n-1; i > 0; i--) {//n번반복, 전체의 -1
		for (int j = 0; j < i; j++) {
			if (list[j] > list[j + 1]) {
				std::swap(list[j], list[j + 1]);
			}
		}
	}
}

void bubbleexample()
{
	int list[] = { 7,5,3,6,9 };
	bubblesort(list, 5);
	for (int i = 0; i < 5; i++) {
		std::cout << list[i] << std::endl;
	}
}

void selectionsort(int list[], int n)//최솟값을 찾아서, least자리에 넣는다.
{
	int least;
	for (int i = 0; i < n; i++) {
		least = i;
		for (int j = i + 1; j < n; j++) {
			if (list[j] < list[least]) {
				least = j;
			}
		}
		if (least != i) {
			std::swap(list[i], list[least]);
		}
	}
	//최솟값을 찾아서, least인덱스와 바꾼다.
}

void selectionexample()
{
	int list[] = { 7,5,3,6,9 };
	bubblesort(list, 5);
	for (int i = 0; i < 5; i++) {
		std::cout << list[i] << std::endl;
	}
}
