#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

const long long INF = numeric_limits<long long>::max();

void dijkstra(int start, const vector<vector<pair<int, int> > >& graph, vector<long long>& dist) {
    priority_queue<pair<long long, int>, vector<pair<long long, int> >, greater<pair<long long, int> > > pq;

    dist[start] = 0; 
    pq.push(make_pair(0, start));

    while(!pq.empty()) 
    {
        long long cur_dist = pq.top().first; 
        int cur_node = pq.top().second; 
        pq.pop();

        if (cur_dist > dist[cur_node]) continue;

        for (pair<int, int> neighbor : graph[cur_node]) 
        {
            int next_node = neighbor.first; 
            int weight = neighbor.second; 

            long long cost = dist[cur_node] + weight;
            if (cost < dist[next_node]) 
            {
                dist[next_node] = cost;
                pq.push(make_pair(cost, next_node));
            }
        }
    }
}

int main() 
{
    ios::sync_with_stdio(false), cin.tie(NULL);

    int N, E;
    cin >> N >> E;
    vector<vector<pair<int, int> > > graph(N + 1); 
    for (int i = 0; i < E; ++i)
    {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].push_back(make_pair(b, c));
        graph[b].push_back(make_pair(a, c)); 
    }
    int v1, v2; 
    cin >> v1 >> v2;

    vector<long long> dist1(N + 1, INF); 
    dijkstra(1, graph, dist1);
    long long d1 = dist1[v1]; 
    long long d2 = dist1[v2]; 

    vector<long long> dist_v1(N + 1, INF);
    dijkstra(v1, graph, dist_v1);
    long long v1_to_v2 = dist_v1[v2];
    long long v1_to_N = dist_v1[N];

    vector<long long> dist_v2(N + 1, INF);
    dijkstra(v2, graph, dist_v2);
    long long v2_to_N = dist_v2[N]; 

    long long path1;
    if (d1 != INF && v1_to_v2 != INF && v2_to_N != INF)
    { 
        path1 = d1 + v1_to_v2 + v2_to_N;
    }
    else
    {
        path1 = INF;
    }

    long long path2;
    if (d2 != INF && v1_to_v2 != INF && v1_to_N != INF) 
    {
        path2 = d2 + v1_to_v2 + v1_to_N;
    } 
    else 
    {
        path2 = INF;
    }

    long long ret = min(path1, path2);
    
    if (ret == INF) 
    {
        cout << -1 << "\n";
    }
    else 
    {
        cout << ret << "\n";
    }

    return 0;
}