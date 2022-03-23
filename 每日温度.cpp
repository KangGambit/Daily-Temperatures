#include <iostream>
#include <stack>
#include <vector>

int main()
{
	int temp[7] = { 30, 40, 20, 25, 30, 50, 10 };

	int n = sizeof(temp) / sizeof(temp[0]);
	std::vector<int> res(n);
	std::stack<int> s;

	for (int i = 0; i < n; i++)
	{
		while (!s.empty() && temp[i] > temp[s.top()])
		{
			res[s.top()] = i - s.top();
			s.pop();
		}
		s.push(i);
		
	}
	std::vector<int>::iterator ite;
	for (ite = res.begin(); ite != res.end(); ite++)
	{
		std::cout << *ite << '\t';
	}
	std::cout << std::endl;
	return 0;
}