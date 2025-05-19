#include <string>
#include <vector>

using namespace std;


int solution(vector<int> _vector) {
    int answer = 0;
    vector<int> v;
    int num = 0;

    for (int i : _vector)
    {
        
        v.push_back(i);
        num = v.size();
            if (num >= 4)
            {
                if (v[num-1] == 1 && v[num - 2] == 3 && v[num - 3] == 2 && v[num - 4] == 1)
                {
                    answer++;
                    v.pop_back();
                    v.pop_back();
                    v.pop_back();
                    v.pop_back();
                }
            }
    }


    return answer;
}