#ifndef DATA_HPP
#define DATA_HPP

#include <math.h>

#include "Data.h"

template<class T>
Data<T>::Data( T* data, size_t size )
: _isDataSorted(false)
{
	_data.clear();
	for(size_t el = 0; el < size; ++el )
		_data.emplace_back( data[el] );

	std::sort( _data.begin(), _data.end()  );
	_isDataSorted = true;
}

template<class T>
void Data<T>::AddElement(T element)
{
	size_t left = _data.begin();
	size_t right = _data.end();
	size_t mid = std::floor( (left+right)/2 );

	while( left < right )
	{
		if( right >= left )
		{
			_data.emplace( right+1, element );
		}
		else
		{
			if( _data[mid] > element )
			{
				right = mid-1;
			}
			else if( _data[mid] < element )
			{
				left = mid+1;
			}
			else // element already exests
			{
				_data.emplace( mid+1, element );
			}

			mid = std::floor( (left + right) / 2 );
		}
	}
}

template<class T>
void Data<T>::PrintData()
{
	for(const auto& el : _data )
		std::cout << el << " ";

	std::cout << std::endl;
}

template<class T>
double Data<T>::FindMedian()
{
	if( !_isDataSorted )
	{
		Sort();
		_isDataSorted = true;
	}

	size_t dataSize = _data.size();
	size_t middleIdx = std::floor( dataSize/2 );
	double median{0};

	if( dataSize % 2 == 0 )
	{
		median = ( _data[middleIdx] + _data[ middleIdx-1 ] ) / 2.0;
	}
	else
	{
		median = _data[middleIdx];
	}

	return median;
}

template<class T>
void Data<T>::Sort()
{
	std::sort( _data.begin(), _data.end() );
}

#endif