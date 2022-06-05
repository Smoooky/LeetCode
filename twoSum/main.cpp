#include "Solution.h"

int main() {
	vector<int> input;
	Solution sol;
	input.push_back(3);
	input.push_back(2);
	input.push_back(4);


	cout << sol.twoSum(input, 6)[0] << sol.twoSum(input, 6)[1] << endl;
	return 0;
}
