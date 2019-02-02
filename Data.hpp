#ifndef DATA_HPP
#define DATA_HPP

#include "Data.h"

template<class T>
Data<T>::Data( T* data, size_t size )
: _isDataSorted(false)
{
	_data.clear();
	for(size_t i = 0; i < size; ++i )
		_data.emplace_back( data[i] );

	std::sort( _data.begin(), _data.end()  );
	_isDataSorted = true;
}

template<class T>
void Data<T>::AddElement(T element)
{
	if( !_isDataSorted )
	{
		Sort();
		_isDataSorted = true;
	}

	auto pos = std::find_if( _data.begin(), _data.end(), [element](auto current)
	{
		return element <= current;	
	});

	_data.emplace( pos, element );
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
	if( _data.size() == 1 ) { return _data[0]; }

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