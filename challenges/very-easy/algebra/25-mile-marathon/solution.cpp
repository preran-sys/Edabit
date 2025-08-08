// Challenge Title: 25-Mile Marathon
// URL: https://edabit.com/challenge/37D2uQBseuLDPP2Dd
// Difficulty: Very Easy
// Tags: algebra, arrays, math, validation

// Mary wants to run a 25-mile marathon. When she attempts to sign up for the marathon, 
// she notices the sign-up sheet doesn't directly state the marathon's length. Instead, 
// the marathon's length is listed in small, different portions. Help Mary find out how long the marathon actually is.
// 
// Return <code>true</code> if the marathon is 25 miles long, otherwise, return <code>false</code>.
// 
// 
// --- Examples ---
// 
// 
// /*
// // marathonDistance([1, 2, 3, 4]) ➞ false
// //
// // marathonDistance([1, 9, 5, 8, 2]) ➞ true
// //
// // marathonDistance([-6, 15, 4]) ➞ true
// */
// 
// 
// --- Notes ---
// 
// * Items in the array will always be integers.
// * Items in the array may be negative or positive, but since negative distance isn't possible, find a way to convert negative integers into positive integers.
// * Return <code>false</code> if the arguments are empty or not provided.


// --- Resources ---
// * [abs() Function] -> (https://www.programiz.com/cpp-programming/library-function/cstdlib/abs#:~:text=The%20abs()%20function%20in,in%20header%20file.&text=The%20abs()%20function%20is,header%20for%20valarrays.)
// * [std::vector] -> (http://www.cplusplus.com/reference/vector/vector/)
// * [std::accumulate()] -> (https://en.cppreference.com/w/cpp/algorithm/accumulate)


#include <vector>
#include <cstdlib>

using namespace std;

bool marathonDistance(std::vector<int> d) {
	int marathonDistance {0};
	if (d.empty()) { return false; }
	for(int i = 0; i < d.size(); ++i) {
		if (d[i] < 0) {
			d[i] = abs(d[i]);
		}
		marathonDistance += d[i];
	}
	if (marathonDistance == 25) {
		return true;
	} else {
		return false;
	}
}