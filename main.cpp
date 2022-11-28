#include <iostream>
#include <vector>
#include <cmath>


using namespace std;

int main() {
	srand((unsigned) time(NULL));
	vector<int> list = {};
	int trys = 0;
	restart:
	for (int i = 0; i < 100000; i++) {
		list.push_back(rand()%2);
	}
	int zero_num = 0;
	int one_num = 0;
	for (int j : list) {
		zero_num += (j == 0) ? 1:0;
		one_num += (j == 1) ? 1:0;
	}
	if (zero_num == one_num) {
		cout << trys;
	} else if (zero_num != one_num) {
		trys += 1;
		list = {};
		goto restart;
	}
	return 0;
}
