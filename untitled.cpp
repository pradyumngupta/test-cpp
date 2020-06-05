#include<bits/stdc++.h>
using namespace std;



int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
//////////////////////////////


	deque<int> q;

	q.push_back(12);
	q.push_back(14);
	q.push_back(15);
	q.push_back(16);
	q.push_back(17);

	cout << q.size() << endl;
	cout << q.front() << endl;
	cout << q.back() << endl;
	q.pop_front();
	cout << q.front();

	return 0;
}