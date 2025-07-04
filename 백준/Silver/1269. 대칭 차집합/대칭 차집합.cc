#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N, M, n, count = 0;
	cin >> N >> M;

	vector<int> v(N + M);

	for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

	sort(v.begin(), v.end());

	for (int i = 0; i < M; i++)
	{
		cin >> n;

		if (std::binary_search(v.begin(), v.end(), n))
        {
            count++;
        }
	}

	cout << v.size() - 2 * count;
    
    return 0;
}