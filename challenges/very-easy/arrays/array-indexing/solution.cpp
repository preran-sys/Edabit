// Challenge Title: Array Indexing
// URL: https://edabit.com/challenge/cKMF5enomHnJubymo
// Difficulty: Very Easy
// Tags: arrays, language_fundamentals

// Given an index  and an array, return the value of the array with the given index.
// 
// 
// --- Examples ---
// 
// 
// /*
// // valueAt([1, 2, 3, 4, 5, 6], 10 / 2) ➞ 6
// //
// // valueAt([1, 2, 3, 4, 5, 6], 8.0 / 2) ➞ 5
// //
// // valueAt([1, 2, 3, 4], 6.535355314 / 2) ➞ 4
// */
// 
// 
// --- Notes ---
// 
// N/A


// --- Resources ---
// * [std::vector] -> (http://www.cplusplus.com/reference/vector/vector/)
// * [std::vector::operator[]] -> (https://www.cplusplus.com/reference/vector/vector/operator[]/)

#include <vector>
#include <stdexcept>

int valueAt(std::vector<int> arr, float i) {
    if ((i >= 0) && (i < arr.size())) {
        return arr[static_cast<int>(i)];
    } else {
        throw std::invalid_argument("Array indexing out of bounds!!");
    }	
}
