//week11-9 수박수박수박수박수?
#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) answer += "수";
        else answer += "박";
    }
    
    
    return answer;
}