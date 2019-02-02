#ifndef TESTING_DATA_H
#define TESTING_DATA_H

#include <utility>
#include <array>

#include "Data.h"

enum class testCases 
{
    // median tests
    oddNumOfElements = 0,
    evenNumOfElements,
    partiallySortedOdd,
    partiallySortedEven,
    singleElement,

    // adding an element tests
    addAtBeginnig,
    addAtEnd,
    addAtRandom,
    addOnExistingElement
};


class TestingData
{
public:
    TestingData(){}
    ~TestingData(){}

    //-----------------------------------------------------------------------------
	/// This function returns a pair which holds the median calculation
    /// from the Data class and the correct median value for this input data.
	/// 'caseIdx' - index of the test case.
	//-----------------------------------------------------------------------------
    std::pair<double, double> TestMedian( testCases caseIdx );

    //-----------------------------------------------------------------------------
	/// This function compares two arrays after adding an element to the 
    /// to be tested set. 
	/// 'caseIdx' - index of the test case.
	//-----------------------------------------------------------------------------
    bool TestElementAddition( testCases caseIdx );   
};

#endif