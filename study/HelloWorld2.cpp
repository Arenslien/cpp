#include <iostream>
#include <string>

// 사용할 표준 라이브러리 이름을 선언
using std::cin;
using std::endl;
using std::cout;
using std::string;

// 이번에는 main 함수에 인자 값이 안 들어감.
int main()
{
    // 다음 문자열을 출력함.
    cout << "Please enter your first name:";

    // 이름 읽기
    string name;
    cin >> name; //cin에서는 띄어쓰기를 못 읽음

    // 인사말 준비
    const string greeting = "Hello, " + name + "!";
    
    // 인사말을 둘러 쌓을 블랭크 수
    const int pad = 1;

    // 박스의 row 값
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;

    // 두 라인 들여쓰기
    cout << endl << endl;

    for (int r = 0; r != rows; ++r) {
        string::size_type c = 0;

        while (c != cols) {
            if (r == pad + 1 && c == pad + 1) {
                cout << greeting;
                c += greeting.size();
            } else {
                if (r == 0 || r == rows -1 ||
                    c == 0 || c == cols - 1)
                    cout << "*";
                else
                    cout << " ";
                ++c;
            }
        }
        cout << endl;
    }
    return 0;
}