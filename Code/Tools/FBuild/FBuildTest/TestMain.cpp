// TestMain.cpp : Defines the entry point for the console application.
//------------------------------------------------------------------------------

// Includes
//------------------------------------------------------------------------------
#include "TestFramework/TestGroup.h"

// main
//------------------------------------------------------------------------------
int main( int, char *[] )
{
    // tests to run
    REGISTER_TESTGROUP( TestObject )

    TestManager utm;

    const bool allPassed = utm.RunTests();

    return allPassed ? 0 : -1;
}

//------------------------------------------------------------------------------
