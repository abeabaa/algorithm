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

void Bubblesort(int list[], int n)
{
	for (int i = 0; i <  n - 1; i++) {
		for (int j = 0; j < n-i-1; j++) {
			if (list[j] > list[j + 1]) {
				std::swap(list[j], list[j + 1]);
			}
		}
	}
}

void Bubbleexample()
{
	int list[] = { 7,5,3,6,9 };
	Bubblesort(list, 5);
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

//void insertsort(int list[], int n)
//{
//	int j;
//	for (int i = 0; i < n-1; i++) {
//		j = i;
//		while (list[i + 1] < list[i] && j >= 0) {
//			std::swap(list[i],list[i+1]);
//		}
//	}
//} 이거는 왜 안됨? 이해안됨  
void insertsort(int list[], int n)
{
	int j;
	for (int i = 0; i < n - 1; i++) {
		j = i;
		while (list[j + 1] < list[j] && j>=0) {
			std::swap(list[j], list[j + 1]);
			j--;
		}
	}

	for (int i = 0; i < n; i++) {
		std::cout << list[i] << std::endl;
	}
}

void insertexample()
{
	int list[] = { 1,10,5,4,7,6 };
	insertsort(list, 6);
}

void countsort()//?????????????????????????????????????????????????????????이해안도ㅚㅁ
{
	int array[6] = { 3,0,4,0,2,4 };
	int count[5];
	for (int i = 0; i < 5; i++) {
		count[i] = 0;
	}

	for (int i = 0; i < 6; i++) {
		count[array[i]]++;
	}
	std::cout << std::endl;
	for (int i = 0; i < 5; i++) {
		if (count[i] != 0) {
			for (int j = 0; j < count[i]; j++) {
				std::cout << i << " ";
			}
		}
	}
}
