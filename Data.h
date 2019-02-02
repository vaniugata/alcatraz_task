#ifndef DATA_H
#define DATA_H

#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>

template <class T>
class Data
{
private:
	std::vector<T> _data;	
	bool _isDataSorted;

public:
	Data( T* data, size_t size );
	~Data() {};

	//-----------------------------------------------------------------------------
	/// Add element to class container on appropreate index.
	/// 'data' - data container. The function should be used with numerical data types only.
	//-----------------------------------------------------------------------------
	void AddElement(T element);

	//-----------------------------------------------------------------------------
	/// Print data stored in container
	//-----------------------------------------------------------------------------
	void PrintData();

	//-----------------------------------------------------------------------------
	/// Finds the median of the provided data.
	/// 'data' - data container. The function should be used with numerical data types only.
	/// 'size' - size of the data container.
	//-----------------------------------------------------------------------------
	double FindMedian();

	//-----------------------------------------------------------------------------
	/// Getter for member '_data' of type vector<T>.
	//-----------------------------------------------------------------------------
	std::vector<T> const & GetData() const { return _data; } 

private:
	//-----------------------------------------------------------------------------
	/// Sort class data.
	//-----------------------------------------------------------------------------
	void Sort();
};

#include "Data.hpp"

#endif