//
// Created by matsony on 03.06.22.
//

#include "Solution.h"

int Solution::romanToInt(string s) {
	int res = 0;
//	int integer[7] = {1000, 500, 100, 50, 10, 5, 1};
//	char roman[7] = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};


	map<char, int> dict;
	dict['I'] =  1;
	dict['V'] =  5;
	dict['X'] =  10;
	dict['L'] =  50;
	dict['C'] =  100;
	dict['D'] =  500;
	dict['M'] =  1000;
	for (int i = 0; i < s.length(); i++){

		if ((*dict.find(s[i])).second >= (*dict.find(s[i + 1])).second)
			res += (*dict.find(s[i])).second;
		else
			res -= (*dict.find(s[i])).second;
	}
	return (res);
}