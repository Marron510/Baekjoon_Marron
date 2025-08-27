#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n,vector<int>(n));
    int num = 1;
    int minY = 0;
    int minX = 0;
    int maxY = n-1;
    int maxX = n-1;
    
    while(num <= (n * n)){
        for(int i = minY; i <= maxY; i++){
            answer[minX][i] = num++;
        }
        minX++;
        for(int i = minX; i <= maxX; i++){
            answer[i][maxY] = num++;
        }
        maxY--;
        for(int i = maxY; i >= minY; i--){
            answer[maxX][i] = num++;
        }
        maxX--;
        for(int i = maxX; i >= minX; i--){
            answer[i][minY] = num++;
        }
        minY++;
    }
    
    return answer;
}