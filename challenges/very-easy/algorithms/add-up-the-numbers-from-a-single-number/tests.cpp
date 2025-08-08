
#include <iostream>
#include <string>
#include <vector>
#include "solution.cpp"

void runTest(const std::string& testName, const std::string& input, const std::string& expected, const std::string& actual) {
    if (actual == expected) {
        std::cout << "[PASSED] " << testName << std::endl;
    } else {
        std::cout << "[FAILED] " << testName << std::endl;
        std::cout << "  Input: " << input << std::endl;
        std::cout << "  Expected: " << expected << std::endl;
        std::cout << "  Actual: " << actual << std::endl;
    }
}

int main() {
    std::cout << "--- Running tests for addUp ---" << std::endl;

    // Test Case 1
    runTest("Test 1", R"(addUp(4)", std::to_string(10), std::to_string(addUp(4)));

    // Test Case 2
    runTest("Test 2", R"(addUp(13)", std::to_string(91), std::to_string(addUp(13)));

    // Test Case 3
    runTest("Test 3", R"(addUp(600)", std::to_string(180300), std::to_string(addUp(600)));

    // Test Case 4
    runTest("Test 4", R"(addUp(392)", std::to_string(77028), std::to_string(addUp(392)));

    // Test Case 5
    runTest("Test 5", R"(addUp(53)", std::to_string(1431), std::to_string(addUp(53)));

    // Test Case 6
    runTest("Test 6", R"(addUp(897)", std::to_string(402753), std::to_string(addUp(897)));

    // Test Case 7
    runTest("Test 7", R"(addUp(23)", std::to_string(276), std::to_string(addUp(23)));

    // Test Case 8
    runTest("Test 8", R"(addUp(1000)", std::to_string(500500), std::to_string(addUp(1000)));

    // Test Case 9
    runTest("Test 9", R"(addUp(738)", std::to_string(272691), std::to_string(addUp(738)));

    // Test Case 10
    runTest("Test 10", R"(addUp(100)", std::to_string(5050), std::to_string(addUp(100)));

    // Test Case 11
    runTest("Test 11", R"(addUp(925)", std::to_string(428275), std::to_string(addUp(925)));

    // Test Case 12
    runTest("Test 12", R"(addUp(1)", std::to_string(1), std::to_string(addUp(1)));

    // Test Case 13
    runTest("Test 13", R"(addUp(999)", std::to_string(499500), std::to_string(addUp(999)));

    // Test Case 14
    runTest("Test 14", R"(addUp(175)", std::to_string(15400), std::to_string(addUp(175)));

    // Test Case 15
    runTest("Test 15", R"(addUp(111)", std::to_string(6216), std::to_string(addUp(111)));

    return 0;
}
