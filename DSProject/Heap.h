#pragma once
#include<vector>
using namespace std;
public class MinHeap
{
public:

	MinHeap(int cap);
	//A parameterized constructor for the heap
	//---------------------------------------------------

	int parent(int i);
	//Gets the parent node of the given index
	//---------------------------------------------------

	int left(int i);
	//Gets the left node of the given index
	//---------------------------------------------------

	int right(int i);
	//Gets the right node of the given index
	//---------------------------------------------------

	int getMin();
	//Gets the minimum value (root node) of the heap
	//---------------------------------------------------

	int extractMin();
	//Gets and remove the minimum value (root node) of the heap
	//---------------------------------------------------

	void insert(int val);
	//Inserts new  "value" to the heap
	//---------------------------------------------------

	void deleteKey(int i);
	//Delete value with given index from the heap
	//---------------------------------------------------

	void MinHeapify(int i);
	//Re-construct array elements to follow the MinHeap structure
	//---------------------------------------------------

	void linearSearch(int val);
	//Search for specific element in the heap
	//---------------------------------------------------

	void printArray();
	//Print all values of the heap
	//---------------------------------------------------
	void set_capicity(int c);
	// set the heap capacity
	void set_size(int s);

	void set_array(int* h);

	int get_capicity();

	int get_size();


	int* get_array();

public:

	int* harr; //pointer to array of elements in the heap
	int capacity; //maximum possible size of heap
	int heap_size; //current number of elements in the heap
};