#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "pgcd.h"


TEST_CASE( "Valeur classic PGCD", "[pgcd1]" ) {
    REQUIRE(PGCD(6, 6) == 6);
    REQUIRE(PGCD(456, 10) == 2);
    REQUIRE(PGCD(564, 9967) == 1);
    REQUIRE(PGCD(65535, 65535) == 65535);
}

TEST_CASE( "Valeur PGCD avec la valeur 0", "[pgcd2]" ) {
    REQUIRE(PGCD(0, 0) == 0);
    REQUIRE(PGCD(0, 15) == 15);
    REQUIRE(PGCD(456, 0) == 456);
}
