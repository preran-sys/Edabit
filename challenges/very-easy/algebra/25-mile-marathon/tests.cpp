// main.cpp

#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <cmath>
#include "solution.cpp"

// Renamed the function to avoid conflicts if needed, and to be more descriptive
bool unknownFunction(std::vector<int> distances) {
    return marathonDistance(distances);
}

// Overloaded runTest to handle boolean return types
void runTest(const std::string& testName, const std::string& input, bool expected, bool actual) {
    if (actual == expected) {
        std::cout << "[PASSED] " << testName << std::endl;
    } else {
        std::cout << "[FAILED] " << testName << std::endl;
        std::cout << "  Input: " << input << std::endl;
        std::cout << "  Expected: " << (expected ? "true" : "false") << std::endl;
        std::cout << "  Actual: " << (actual ? "true" : "false") << std::endl;
    }
}

int main() {
    std::cout << "--- Running tests for marathonDistance ---" << std::endl;

    // Test Case 1: Sum is not 25
    runTest("Test 1", "marathonDistance({1, 2, 3, 4})", false, marathonDistance({1, 2, 3, 4}));

    // Test Case 2: Sum is 25, includes negative
    runTest("Test 2", "marathonDistance({-6, 15, 4})", true, marathonDistance({-6, 15, 4}));

    // Test Case 3: Sum is 25
    runTest("Test 3", "marathonDistance({1, 9, 5, 8, 2})", true, marathonDistance({1, 9, 5, 8, 2}));

    // Test Case 4: Sum is not 25
    runTest("Test 4", "marathonDistance({9, 7, 6, 5})", false, marathonDistance({9, 7, 6, 5}));

    // Test Case 5: Sum is not 25, includes negative
    runTest("Test 5", "marathonDistance({4, 6, 8, 9, -4})", false, marathonDistance({4, 6, 8, 9, -4}));

    // Test Case 6: Sum is not 25, all negative
    runTest("Test 6", "marathonDistance({-20, 9, -10, -11})", false, marathonDistance({-20, 9, -10, -11}));

    // Test Case 7: Sum is 25, includes negative
    runTest("Test 7", "marathonDistance({-9, 15, 1})", true, marathonDistance({-9, 15, 1}));

    // Test Case 8: Empty array
    runTest("Test 8", "marathonDistance({})", false, marathonDistance({}));
    
    // Test Case 9: Another empty array test
    runTest("Test 9", "marathonDistance({})", false, marathonDistance({}));


    return 0;
}