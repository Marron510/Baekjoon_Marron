#include <string>
#include <vector>


using namespace std;

vector<int> solution(vector<int> num_list) {
   vector<int> ret;
    for(int i = num_list.size()-1; i >= 0; i--){
        ret.push_back(num_list[i]);
    }
    
    return ret;
}