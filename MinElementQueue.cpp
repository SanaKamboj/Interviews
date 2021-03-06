std::priority_queue<int, std::vector<int>, std::greater<int> > my_min_heap;

#include <bits/stdc++.h>
using namespace std;
 
int main(void) {
	priority_queue<int, vector<int>, greater<int> > pq;
	
	pq.push(40);
	pq.push(320);
	pq.push(42);
	pq.push(42);
	pq.push(65);
	pq.push(12);
	pq.push(245);
 
	cout<<pq.top()<<endl;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
 
class Comp
{
public:
	bool operator () (int lhs, int rhs) {
		return lhs > rhs;
	}
};
 
int main(void) {
	priority_queue<int, vector<int>, Comp> pq;
	
	pq.push(40);
	pq.push(320);
	pq.push(42);
	pq.push(42);
	pq.push(65);
	pq.push(12);
	pq.push(245);
 
	cout<<pq.top()<<endl;
	return 0;
}

