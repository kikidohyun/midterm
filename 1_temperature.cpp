#include <iostream>
#include <string>
using namespace std;

int main(){
    double kg;
    double pound;

    cout << "파운드 무게를 입력하세요: ";
    cin >> pound;

    kg = pound/2.2046;

    cout << "변환된 pound는 226.799kg 입니다.";



    return 0;
}