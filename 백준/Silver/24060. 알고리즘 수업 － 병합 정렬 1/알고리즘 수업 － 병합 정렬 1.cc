#include<iostream>
#include<vector>
#define endl "\n"
using namespace std;

int cnt = 0;  
int ret = -1; 

void merge(vector<int>& A, int p, int q, int r, int K)
{
    int i = p;
    int j = q + 1;
    int t = 0;
    
    vector<int> tmp(r - p + 1);

    while (i <= q && j <= r)
    {
        if (A[i] <= A[j]) 
        {
            tmp[t++] = A[i++];
        }
        else 
        {
            tmp[t++] = A[j++];
        }
    }

    while (i <= q) 
    {
        tmp[t++] = A[i++];
    }

    while (j <= r)
    {
        tmp[t++] = A[j++];
    }

    for (i = p, t = 0; i <= r; i++, t++)
    {
        A[i] = tmp[t];
        cnt++;
        if (cnt == K)
        {
            ret = A[i];
        }
    }
}

void merge_sort(vector<int>& A, int p, int r, int K) 
{
    if (p < r) 
    {
        int q = (p + r) / 2;
        
        merge_sort(A, p, q, K);
        merge_sort(A, q + 1, r, K);
        
        merge(A, p, q, r, K);
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int N, K;
    cin >> N >> K;
    
    vector<int> A(N);
    
    for (int i = 0; i < N; i++) 
    {
        cin >> A[i];
    }

    merge_sort(A, 0, N - 1, K);
    
    cout << ret << '\n';
    return 0;
}
