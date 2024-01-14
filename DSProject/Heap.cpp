#include "Heap.h"
#include <iostream>
#include<vector>
#include"Insert.h"

using namespace std;


void swap(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}

MinHeap::MinHeap(int cap) {
	heap_size = 0;
	capacity = cap;
	harr = new int[capacity];

}

int MinHeap::parent(int i)
{
	return (i - 1) / 2;
}

int MinHeap::left(int i)
{
	return (2 * i + 1);
}

int MinHeap::right(int i)
{
	return (2 * i + 2);
}

int MinHeap::getMin()
{
	return harr[0];
}
void MinHeap::set_capicity(int c) {
	capacity = c;

}
void MinHeap::set_size(int s) {
	heap_size = s;
}

void MinHeap::set_array(int* h) {
	harr = h;
}

int* MinHeap::get_array() {
	return harr;
}

int MinHeap::get_capicity() {
	return capacity;
}

int MinHeap::get_size() {
	return heap_size;
}

void MinHeap::linearSearch(int val)
{
	for (int i = 0; i < heap_size; i++)
	{
		if (harr[i] == val)
		{
			cout << "Value Found!";
			return;
		}
	}
	cout << "Value Not Found!";
}

void MinHeap::printArray()
{
	for (int i = 0; i < heap_size; i++)
	{
		cout << harr[i] << " ";
		cout << endl;
	}
}

void MinHeap::insert(int val)
{
	/*if (vect.size() > capacity)
	{
		cout << "overflow,please enter another number of elements\n";
		return;
	}
	heap_size += vect.size();
	for (int i = 0; i < vect.size(); i++)
	{
		harr[i] = vect.at(i);
	}*/
	if (heap_size == capacity) {
	//	cout << "error\n";
		return;
	}
	
		heap_size++;
		int i = heap_size - 1;
		harr[i] = val;

		// Fix the min heap property if it is violated
		while (i != 0 && harr[parent(i)] > harr[i]) {
			swap(harr[i], harr[parent(i)]);
			i = parent(i);
		}
	}



void MinHeap::deleteKey(int i)
{
	harr[i] = INT_MIN;
	while (i != 0 && harr[parent(i)] > harr[i])
	{
		swap(harr[i], harr[parent(i)]);
		i = parent(i);
	}
	extractMin();
}

int MinHeap::extractMin() {
	if (heap_size == 0) {
		cerr << "The Heap is empty" << endl;
		return INT_MAX;
	}
	if (heap_size == 1)
	{
		heap_size--;
		return harr[0];

	}
	int root = harr[0];
	harr[0] = harr[heap_size - 1];
	heap_size--;
	MinHeapify(0);

	return root;
}

void MinHeap::MinHeapify(int i)
{
	int l = left(i);
	int r = right(i);
	int smallest = i;
	if (l < heap_size && harr[l] < harr[i])
		smallest = l;
	if (r < heap_size && harr[r] < harr[smallest])
		smallest = r;
	if (smallest != i)
	{
		swap(harr[i], harr[smallest]);
		MinHeapify(smallest);
	}
}