// Challenge Title: Return the First Element in an Array
// URL: https://edabit.com/challenge/c9gEA53X9ND3M6J26
// Difficulty: Very Easy
// Tags: arrays, language_fundamentals

// Create a function that takes a vector containing only numbers and return the first element.
// 
// 
// --- Examples ---
// 
// 
// /*
// // getFirstValue({1, 2, 3}) ➞ 1
// //
// // getFirstValue({80, 5, 100}) ➞ 80
// //
// // getFirstValue({-500, 0, 50}) ➞ -500
// */
// 
// 
// --- Notes ---
// 
// The first element in an array always has an index of 0.


// --- Resources ---
// * [std::vector<T,Allocator>::front] -> (https://en.cppreference.com/w/cpp/container/vector/front)
// * [std::vector::at] -> (http://www.cplusplus.com/reference/vector/vector/at/)
// * [Vector Operator[]] -> (http://www.cplusplus.com/reference/vector/vector/operator[]/)
// * [What are Vectors ?] -> (https://www.edureka.co/blog/vectors-in-cpp/#:~:text=Vectors%20in%20C%2B%2B%20are%20sequence,as%20efficiently%20as%20in%20arrays.)
// * [vector::front] -> (http://www32.cplusplus.com/reference/vector/vector/front/)

#include <vector>
#include <stdexcept>

int getFirstValue(std::vector<int> arr) {
    if (arr.size() > 0){ 
        return arr[0]; 
    } else {
        throw std::invalid_argument("Out of bounds access, undefined behavior, refrain!");
    }
}