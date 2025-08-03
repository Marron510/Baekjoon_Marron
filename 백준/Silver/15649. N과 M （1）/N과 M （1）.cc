#include <iostream>
using namespace std;

int arr[9] = { 0, };
bool visit[9] = { false, };

void Permutation(int depth, int n, int m)
{
	if (depth == m)
	{
		for (int i = 0; i < m; ++i)
			cout << arr[i] << ' ';
		cout << "\n";

		return;
	}

	for (int i = 1; i <= n; ++i)
	{
		if (!visit[i])
		{
			visit[i] = true;
			arr[depth] = i;
			Permutation(depth + 1, n, m);
			visit[i] = false;
		}
	}
}

int main()
{
	int n, m;

	cin >> n >> m;

	Permutation(0, n, m);

	return 0;
}