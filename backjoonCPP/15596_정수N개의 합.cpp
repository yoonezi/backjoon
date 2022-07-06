#include <vector> // vector를 사용하기 위해 #include <vector>을 참조한다
long long sum(std::vector<int> &a)  // 함수의 정의부 = 자료형 : long long, 함수이름 : sum, 매개변수 : td::vector<int> &a
{
    long long ans = 0; // 답을 담는 변수(long long 타입)를 0으로 초기화
    for (int i = 0 ; i < a.size() ; i++ )
    {
        ans += a[i];
    }
    return ans; // 답을 담은 변수 리턴
}

