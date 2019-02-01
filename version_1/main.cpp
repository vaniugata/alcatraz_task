// #define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include <algorithm>
#include <iomanip>

#include "Data.h"
#include "docTest.h"



double testMedian()
{
	int data[] {1, 2, 3, 4, 5, 12};

	Data<int> numericData( data, sizeof(data)/sizeof(data[0]) );

	return numericData.FindMedian();
}

TEST_CASE("testing the factorial function")
 {
    CHECK(testMedian() == 4);
    CHECK(testMedian() == 3.5);
    CHECK(testMedian() == 5);
    CHECK(testMedian() == 3628800);
}

// // int main()
// {

// 	int data[] {1, 2, 3, 6, 7, 12};

// 	float data2[] { 12.35, 8.1, 1.1, 3.14, 5.12, 7.23 };


// 	Data<float> numericData( data2, sizeof(data2)/sizeof(data2[0]) );
	
// 	numericData.PrintData();
// 	std::cout  << std::setprecision(6) << numericData.FindMedian() << "\n";

// 	return 0;
// }
