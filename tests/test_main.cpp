#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "add.h"

TEST_CASE("check that addition function works") {
    REQUIRE(add(1,2) == 3);
}