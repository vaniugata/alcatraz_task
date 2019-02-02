#include "TestingData.h"

std::pair<double, double> TestingData::TestMedian( testCases caseIdx )
{
    switch( caseIdx )
    {
        case testCases::oddNumOfElements :
        {
            int data[19] { 1, 13, 34, 45,  2,  7, -12, 34, 45, 23,
                          98, 12, -450, 321, 18, 78, 86, 56, 22};
            
            Data<int> dataSet( data, sizeof(data)/sizeof(data[0]) );
            return std::pair<double, double>( dataSet.FindMedian(), 23.0);
        }

        case testCases::evenNumOfElements :
        {
            int data[20] { -1, 23, 3, 125,  3,  27, 12, -4, -56, 723,
                          81, 122, -50, 123, 128, 86, 16, 73, 34, 75 };
            
            Data<int> dataSet( data, sizeof(data)/sizeof(data[0]) );
            return std::pair<double, double>( dataSet.FindMedian(), 30.5);
        }
        
        case testCases::partiallySortedEven :
        {
            int data[20] { -1, 2, 3, 12,  31, 42, 43, 45, -56, 723,
                          81, 122, -50, 123, 128, 86, 16, 73, 34, 75 };
            
            Data<int> dataSet( data, sizeof(data)/sizeof(data[0]) );
            return std::pair<double, double>( dataSet.FindMedian(), 42.5);
        }

         case testCases::partiallySortedOdd :
        {
            int data[19] { -1, 2, 3, 12,  31, 42, 43, 45, -56, 723,
                          81, 122, -50, 123, 128, 86, 16, 73, 34 };
            
            Data<int> dataSet( data, sizeof(data)/sizeof(data[0]) );
            return std::pair<double, double>( dataSet.FindMedian(), 42.0);
        }

         case testCases::singleElement :
        {
            int data[1] { 75 };
            
            Data<int> dataSet( data, sizeof(data)/sizeof(data[0]) );
            return std::pair<double, double>( dataSet.FindMedian(), 75.0);
        }

        default:
        break;
    }
}

bool TestingData::TestElementAddition( testCases caseIdx )
{
    switch( caseIdx )
    {
        case testCases::addAtBeginnig :
        {
            int inputData[10] {12, 35, 46, 18, 2, 0, 93, -3, 14, 54};
            
            Data<int> data( inputData, sizeof(inputData)/sizeof(inputData[0]) );
            data.AddElement(-6);

            int correctOutputData[11] {-6, 12, 35, 46, 18, 2, 0, 93, -3, 14, 54};
            
            return std::equal( std::begin( inputData ), std::end( inputData ), std::begin( inputData ) );
        }

        case testCases::addAtEnd :
        {
             int inputData[10] {12, 35, 46, 18, 2, 0, 93, -3, 14, 54};
            
            Data<int> data( inputData, sizeof(inputData)/sizeof(inputData[0]) );
            data.AddElement(78);

            int correctOutputData[11] {12, 35, 46, 18, 2, 0, 93, -3, 14, 54, 78};

            return std::equal( std::begin( inputData ), std::end( inputData ), std::begin( inputData ) );
        }

        case testCases::addAtRandom :
        {
             int inputData[5] {56, 17, 34, 28, 55};
            
            Data<int> data( inputData, sizeof(inputData)/sizeof(inputData[0]) );
            data.AddElement(42);

            int correctOutputData[6] {17, 28, 34, 42, 55, 56};

            return std::equal( std::begin( inputData ), std::end( inputData ), std::begin( inputData ) );
        }

        case testCases::addOnExistingElement :
        {
             int inputData[5] {56, 17, 34, 28, 55};
            
            Data<int> data( inputData, sizeof(inputData)/sizeof(inputData[0]) );
            data.AddElement(28);

            int correctOutputData[6] {17, 28, 28, 34, 55, 56};

            return std::equal( std::begin( inputData ), std::end( inputData ), std::begin( inputData ) );
        }

        default:
        break;
    }
}