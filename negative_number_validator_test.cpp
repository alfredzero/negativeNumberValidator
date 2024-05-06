// negative_number_validator_test.cpp
#include <iostream>

using namespace std;

//todo: add text fixture

TEST(NegativeNumberValidatorTest, ReturnsTrueForNegativeNumbers) {
    ASSERT_TRUE(NegativeNumberValidator::isNegative(-1));
}

TEST(NegativeNumberValidatorTest, ReturnsFalseForPositiveNumbers) {
    ASSERT_FALSE(NegativeNumberValidator::isNegative(1));
    }

TEST(NegativeNumberValidatorTest, ReturnsFalseForZero) {
    ASSERT_FALSE(NegativeNumberValidator::isNegative(0));
}
