// Challenge Title: Add up the Numbers from a Single Number
// URL: https://edabit.com/challenge/XDx6JoaumAimRHgEt
// Difficulty: Very Easy
// Tags: algorithms, math, numbers, recursion

// Create a function that takes a number as an argument. Add up all the numbers from 1 to the number you passed to the function. For example, if the input is 4 then your function should return 10 because 1 + 2 + 3 + 4 = 10.
// 
// 
// --- Examples ---
// 
// 
// /*
// // addUp(4) ➞ 10
// //
// // addUp(13) ➞ 91
// //
// // addUp(600) ➞ 180300
// */
// 
// 
// --- Notes ---
// 
// Expect any positive number between 1 and 1000.


// --- Resources ---
// * [Algorithms: Recursion] -> (https://www.youtube.com/watch?v=KEEKn7Me-ms)
// * [1 + 2 + 3 + 4 + ⋯] -> (https://en.wikipedia.org/wiki/1_%2B_2_%2B_3_%2B_4_%2B_%E2%8B%AF)
// * [Techniques for Adding the Numbers 1 to 100] -> (https://betterexplained.com/articles/techniques-for-adding-the-numbers-1-to-100/)
// * [Recursion (Think Like a Programmer)] -> (https://youtu.be/oKndim5-G94)
// * [CS50 Recursion] -> (https://youtu.be/mz6tAJMVmfM)
// * [Arithmetic Sequences and Sums] -> (https://www.mathsisfun.com/algebra/sequences-sums-arithmetic.html)


int addUp(int num) {
    if (num == 1) {
        return 1;
    } else {
        return num + addUp(num - 1);
    }
}
