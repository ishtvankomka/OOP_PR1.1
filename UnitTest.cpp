#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "PR1.1/IntRange.cpp"
#include "PR1.1/IntRange.hpp"

TEST_CASE( "Arguments initialized") {
    IntRange testing1;
    REQUIRE( testing1.Init(11, 99) == true);
    REQUIRE( testing1.Init(0, 1) == true);
}
