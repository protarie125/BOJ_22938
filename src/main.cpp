#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	double x1, y1, r1;
	cin >> x1 >> y1 >> r1;

	double x2, y2, r2;
	cin >> x2 >> y2 >> r2;

	const auto& dx = x1 - x2;
	const auto& dy = y1 - y2;
	const auto& dist = sqrt(dx * dx + dy * dy);

	if (dist < r1 + r2) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}