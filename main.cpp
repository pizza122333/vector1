#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> words;  // 문자열 저장용 vector
    string input;

    // 5개의 문자열 입력
    for(int i = 0; i < 5; i++) {
        cout << "문자열을 입력하세요: ";
        cin >> input;
        words.push_back(input);  // vector 끝에 추가
    }

    // 사전 순으로 제일 뒤에 오는 단어 찾기
    string max_word = words[0];
    for(size_t i = 1; i < words.size(); i++) {
        if(words[i] > max_word) {
            max_word = words[i];
        }
    }

    cout << "사전에서 제일 뒤에 나오는 단어는 " << max_word << " 입니다" << endl;

    return 0;
}
