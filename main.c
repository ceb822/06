#include <stdio.h>

// 1. 팩토리얼 계산 함수
int factorial(int a)
{
    int i;
    int res = 1; // 1로 초기화 필수

    for (i = 0; i < a; i++)
    {
        res = res * (i + 1);
    }

    return res; // 반환값 추가 (에러 해결)
}

// 2. 조합 계산 함수
int combination(int n, int r)
{
    int up, down;
    up = factorial(n);
    down = factorial(n - r) * factorial(r);

    return (up / down);
}

// 3. 메인 함수
int main(void)
{
    int result;
    int n, r;

    // n 입력받기
    printf("input n: ");
    scanf("%d", &n);

    // r 입력받기
    printf("input r: ");
    scanf("%d", &r);

    // combination 함수 호출 및 결과 저장
    result = combination(n, r);

    // 결과 출력
    printf("C(%d, %d) = %d\n", n, r, result);

    return 0;
}
