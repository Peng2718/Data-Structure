#include <iostream>
#include <Deque>
using namespace std;

int main() {

	deque<int> q;
	//又clear等操作而单向队列没有，需要一个个pop
	q.push_back(2);
	q.push_front(3);
	q.pop_back();
	q.pop_front();
	//还有迭代用法
	for (int i = 0; i < 10; i++) {
		q.push_front(i);
	}
	for (auto& i : q) {
		cout << i;
	}
	for (auto it = q.begin(); it != q.end(); it++) {
		cout << *it;
	}


	return 0;
}