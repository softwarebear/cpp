#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"

unsigned int Factorial( unsigned int number ) 
{
    return number <= 1 ? 1 : Factorial(number-1)*number;
}

TEST_CASE( "Factorials are computed", "[factorial]" ) 
{
    REQUIRE( Factorial(0) == 1 );
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}

unsigned int Fibonnacci( unsigned int number ) 
{
    unsigned int thisPlace = number == 0 ? 0 : 1;

    if (number <= 2)
    {
        return thisPlace;
    }

    unsigned int onePlaceBack = thisPlace;
    unsigned int twoPlacesBack;
    
    while (number-- > 2)
    {
        twoPlacesBack = onePlaceBack;
        onePlaceBack = thisPlace;
        thisPlace = twoPlacesBack + onePlaceBack;
    }

    return thisPlace;
}

TEST_CASE( "fibonnacci sequence is computed", "[fibonnacci]" ) 
{
    REQUIRE( Fibonnacci(0) == 0 );
    REQUIRE( Fibonnacci(1) == 1 );
    REQUIRE( Fibonnacci(2) == 1 );
    REQUIRE( Fibonnacci(3) == 2 );
    REQUIRE( Fibonnacci(4) == 3 );
    REQUIRE( Fibonnacci(5) == 5 );
    REQUIRE( Fibonnacci(6) == 8 );
    REQUIRE( Fibonnacci(7) == 13 );
}
