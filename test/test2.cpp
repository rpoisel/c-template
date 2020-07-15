#include <arithpp.h>
#include <catch2/catch.hpp>

#include <cmath>
#include <limits>

TEST_CASE("Assert empty calculator", "[require]")
{
  Arith::Calculator calculator;

  REQUIRE(calculator.add() == 0);
  REQUIRE(std::isnan(calculator.divide()) == true);
}

TEST_CASE("Assert one element in calculator", "[require]")
{
  Arith::Calculator calculator;
  calculator.push(5);

  REQUIRE(calculator.add() == 5);
  REQUIRE(calculator.divide() == 5);
}

TEST_CASE("Assert one element with value 0 in calculator", "[require]")
{
  Arith::Calculator calculator;
  calculator.push(0);

  REQUIRE(calculator.add() == 0);
  REQUIRE(calculator.divide() == 0);
}

TEST_CASE("Assert two elements in calculator", "[require]")
{
  Arith::Calculator calculator;
  calculator.push(5);
  calculator.push(2);

  REQUIRE(calculator.add() == 7);
  REQUIRE(calculator.divide() == 2.5);
}

TEST_CASE("Assert two elements with first of them 0 in calculator", "[require]")
{
  Arith::Calculator calculator;
  calculator.push(0);
  calculator.push(5);

  REQUIRE(calculator.add() == 5);
  REQUIRE(calculator.divide() == 0);
}

TEST_CASE("Assert two elements with second of them 0 in calculator", "[require]")
{
  Arith::Calculator calculator;
  calculator.push(5);
  calculator.push(0);

  REQUIRE(calculator.add() == 5);
  REQUIRE(std::isinf(calculator.divide()));
}
