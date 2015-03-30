//============================================================================
// Name        : 1234.cpp
// Author      :
// Version     : 0.1
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {


	size_t array_size = 1;
	size_t array_index = 0;
	size_t sum = 0;
	size_t input = 1;
	size_t *array = nullptr;

	array = new size_t [array_size];
	array[array_index] = 1;

	cout<<"Enter your digits ('0' ends sequence):"<<endl;

	while(input)
	{

		if(array_index == array_size)
		{
			array_size *= 2;
			size_t *new_array = new size_t [array_size];

			for(size_t i = 0; i < (array_size/2); ++i)
			{
				new_array[i] = array[i];
			}

			delete[] array;
			array = new_array;
			new_array = nullptr;
		}

		cin>>input;
		array[array_index] = input;
		sum += array[array_index];
		++array_index;
	}

	array_index = 0;

	while(array[array_index])
	{
		cout << array[array_index] <<" + ";
		++array_index;
	}

	cout << array[array_index] << " = "<< sum << endl;

	delete[] array;

	return 0;
}
