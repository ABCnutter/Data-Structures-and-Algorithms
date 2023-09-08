#include "array_algorithm.h"

using namespace std;

void print_vector(vector<int> arrays) {

	std::cout << "{";

	for (auto array : arrays) {
		std::cout << array << " ";
	}

	std::cout << "}" << std::endl;

}

void print_2dvector(vector<vector<int>> arrays2d) {
	for (auto p = begin(arrays2d); p != end(arrays2d); ++p) {   //用begin()和end()来替代手工的控制变量
		for (auto q = begin(*p); q != end(*p); ++q) {
			cout << *q << ' ';
		}
		cout << endl;
	}
}


int main() {
	vector<int> nums = { 2,3,1,2,4,3 };

	int target = 3;

	//int search_result = search(nums, target);
	//int removeelement = removeElement_violent(nums, target);
	//int removeelement_fasterslowpoint = removeElement_fasterslowpoint(nums, target);
	//vector<int> sortedsquares = sortedSquares(nums);
	//std::cout << "subscript of target: " << search_result << std::endl;
	//std::cout << "len of nums after remove element: " << removeelement << std::endl;
	//std::cout << "len of nums after remove element fasterslowpoint: " << removeelement_fasterslowpoint << std::endl;
	//print_vector(sortedsquares);
	//int sub_array_len = minSubArrayLen(target, nums);
	//std::cout << "len of sub_array: " << sub_array_len << std::endl;
	vector<vector<int>> results_generatmatrix = generateMatrix(target);
	print_2dvector(results_generatmatrix);

	return 0;
}