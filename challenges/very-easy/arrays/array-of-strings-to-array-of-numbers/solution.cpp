// Challenge Title: Array of Strings to Array of Numbers
// URL: https://edabit.com/challenge/LNAZ6Yeii3byk284h
// Difficulty: Very Easy
// Tags: arrays, language_fundamentals, strings

// Create a function that takes as a parameter an array of string numbers and returns an array of numbers.
// 
// Example:
// 
// 
// /*
// // ["1", "3", "3.6"] ➞ [1, 3, 3.6]
// */
// 
// 
// --- Examples ---
// 
// 
// /*
// // toNumberArray(["9.4", "4.2"]) ➞ [9.4, 4.2]
// //
// // toNumberArray(["1.4", "4.4", "5.7", "4.3", "9.8", "5.3", "8.7", "8.6", "9.8"])
// // ➞ [1.4, 4.4, 5.7, 4.3, 9.8, 5.3, 8.7, 8.6, 9.8]
// //
// // toNumberArray(["9.5", "8.8"]) ➞ [9.5, 8.8]
// */
// 
// 
// --- Notes ---
// 
// Note that you can receive decimal string numbers as well.


// --- Resources ---
// * [std::stof] -> (https://www.cplusplus.com/reference/string/stof/)
#include <vector>
#include <string>

std::vector<float> toNumberArray(std::vector<std::string> arr) {
    if (arr.empty()) {
        std::vector<float> empty {};
        return empty;
    }
    std::vector<float> newArray = {};
	for(int i = 0; i < arr.size(); ++i) {
        newArray.push_back(std::stof(arr[i]));
    }
    return newArray;
}