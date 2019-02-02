#include <iostream>
#include <algorithm>
#include <iomanip>
#include <limits>

#include "Data.h"

//-----------------------------------------------------------------------------
/// The testing framework implements the main function itself.
/// Either comment out the code below or the implementation of the main
/// function in this file.
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "docTest.h"
#include "TestingData.h"

TestingData testingData;

TEST_CASE("testing finding the median function")
 {
    // sorry for this disgusting mess below

    // Espilon compare two double values for additional accuracy
    auto eComp = [](double lhs, double rhs) -> bool
    {
        return fabs(lhs - rhs) <= std::numeric_limits<double>::epsilon();
    };

    // Get data testing unit output value and correct value
    auto getUnit = []( testCases testCase, bool correctValue = false ) -> double
    {
        return correctValue ? testingData.TestMedian(testCase).second : testingData.TestMedian(testCase).first;
    };

    CHECK( eComp( getUnit(testCases::oddNumOfElements), getUnit(testCases::oddNumOfElements, true) ) );
    CHECK( eComp( getUnit(testCases::evenNumOfElements), getUnit(testCases::evenNumOfElements, true) ) );
    CHECK( eComp( getUnit(testCases::partiallySortedOdd), getUnit(testCases::partiallySortedOdd, true) ) );
    CHECK( eComp( getUnit(testCases::partiallySortedEven), getUnit(testCases::partiallySortedEven, true) ) );
    CHECK( eComp( getUnit(testCases::singleElement), getUnit(testCases::singleElement, true) ) );
}

TEST_CASE("testing the element addition function")
{
    CHECK( testingData.TestElementAddition( testCases::addAtBeginnig ) );
    CHECK( testingData.TestElementAddition( testCases::addAtEnd ) );
    CHECK( testingData.TestElementAddition( testCases::addAtRandom ) );
    CHECK( testingData.TestElementAddition( testCases::addOnExistingElement ) );
}
//-----------------------------------------------------------------------------

// int main()
// {

// 	// int data[] {1, 2, 5, 6, 7, 8, 12, 34, 52};
// 	// // float data2[] { 12.35, 8.1, 1.1, 3.14, 5.12, 7.23 };


// 	// Data<int> numericData( data, sizeof(data)/sizeof(data[0]) );
// 	// numericData.AddElement(222);
// 	// numericData.PrintData();
//     // std::cout << "median = " << numericData.FindMedian() << std::endl;

// 	return 0;
// }
