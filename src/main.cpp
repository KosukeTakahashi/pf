#include <iostream>
#include <sstream>
#include <math.h>
#include <vector>

using namespace std;

vector<long> pf(long n) {
	long temp = (long) sqrt(n);
	vector<long> factors;

	for (long t = 2; t <= temp; t++) {
		while (n % t == 0) {
			n /= t;
			factors.push_back(t);
		}
	}

	if (n != 1)
		factors.push_back(n);

	return factors;
}

string vec_to_str(vector<long> vec) {
	stringstream ss;
	bool first = true;
	for (long x : vec) {
		if (!first)
			ss << ", ";
		ss << x;
		first = false;
	}
	return ss.str();
}

int main() {
	long t;

	cout << "n = ";
	cin >> t;

	if (2 <= t && t <= 2147483647)
		cout << vec_to_str(pf(t)) << endl;
	else
		cout << "Illegal input!" << endl;
	return 0;
}

