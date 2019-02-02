#include <iostream>
#include <algorithm>
#include <iomanip>

#include "Data.h"

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "docTest.h"
#include "TestingData.h"

TestingData testingData;


TEST_CASE("testing finding the median function")
 {
    CHECK( testingData.TestMedian( testCases::oddNumOfElements ).first == testingData.TestMedian( testCases::oddNumOfElements ).second );
    CHECK( testingData.TestMedian( testCases::evenNumOfElements ).first == testingData.TestMedian( testCases::evenNumOfElements ).second );
    CHECK( testingData.TestMedian( testCases::partiallySortedOdd ).first == testingData.TestMedian( testCases::partiallySortedOdd ).second );
    CHECK( testingData.TestMedian( testCases::partiallySortedEven ).first == testingData.TestMedian( testCases::partiallySortedEven ).second );
    CHECK( testingData.TestMedian( testCases::singleElement ).first == testingData.TestMedian( testCases::singleElement ).second );
}

TEST_CASE("testing the element addition function")
{
    CHECK( testingData.TestElementAddition( testCases::addAtBeginnig ) );
    CHECK( testingData.TestElementAddition( testCases::addAtEnd ) );
    CHECK( testingData.TestElementAddition( testCases::addAtRandom ) );
    CHECK( testingData.TestElementAddition( testCases::addOnExistingElement ) );
}

// int main()
// {

// 	int data[] {1, 2, 5, 6, 7, 8, 12, 34, 52};
// 	// float data2[] { 12.35, 8.1, 1.1, 3.14, 5.12, 7.23 };


// 	Data<int> numericData( data, sizeof(data)/sizeof(data[0]) );
// 	numericData.AddElement(222);
// 	numericData.PrintData();
//     std::cout << "median = " << numericData.FindMedian() << std::endl;

// 	return 0;
// }
