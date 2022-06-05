//
// Created by matsony on 03.06.22.
//

#include "Solution.h"

vector<int>	Solution::twoSum(vector<int> &nums, int target){
	map<int, int> map;
	vector<int> res;

	for (int i = 0; i < nums.size(); i++){
		int difference = target - nums[i];
		if (map.find(difference) != map.end()){
			res.push_back(map.find(difference)->second);
			res.push_back(i);
			break;
		}
		map.insert(pair<int, int>(nums[i], i));
	}
	return (res);
}