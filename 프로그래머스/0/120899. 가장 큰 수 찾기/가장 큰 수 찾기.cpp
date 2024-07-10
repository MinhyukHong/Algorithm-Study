#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int max_num = *max_element(array.begin(), array.end());
    int max_index = max_element(array.begin(), array.end()) - array.begin();
    answer.push_back(max_num);
    answer.push_back(max_index);
    
    return answer;
}