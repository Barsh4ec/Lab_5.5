#include <iostream>
#include <cmath>

using namespace std;

int f(int n, int level, int &depth)
{
	depth = level;
	if (n == 0)
		return 0;
	else
		return 1 + f(n & (n - 1), level + 1, depth);
}

int main()
{
	double n;
	cout << " n = "; cin >> n;
	int depth = 0;

	cout << "f(n) = " << f(n, 1, depth) << endl;
	cout << "depth = " << depth << endl;
}