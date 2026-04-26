#pragma warning (disable:4996) // Visual stduio 2015 이상에서 scanf 사용시 포함
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX 1000005
int insu[102][80000] = { 0 }; // N개의 숫자의 소인수를 담을 변수
int sum[102] = { 0 }; // 
int arr[MAX] = { 0 }; // 에라토스테네스의 체를 위한 숫자 담을 변수 
int prime[80000] = { 0 }; // 소수만 담을 변수 (백만 이하의 소수가 약 8만개)
int count = 0; // 소수
int ans_gcd = 1; //
int ans_move = 0;
void prime_count(int max_value)
{
	int sq_max = (int)sqrt(max_value);
	for (int i = 2; i <= max_value; i++)
	{
		arr[i] = 1; // 2이상의 모든 숫자가 우선 소수라고 가정한다.
	}

	for (int i = 2; i <= sq_max; i++)
	{
		if (arr[i] == 0) // 이미 0인 경우(소수가 아니라고 밝혀진 경우 아래 반복문 스킵)
			continue; 
		for (int j = i + i; j <= max_value; j += i) // i의 배수는 모두 소수가 아니다. (Ex i가 2인 경우 2를 제외한 2의 모든 배수는 소수가 아니다.)
		{ 
			arr[j] = 0; // 0으로 표기한다.
		}
	}
	for (int i = 2; i <= max_value; i++) 
	{
		if (arr[i] != 0) // 숫자가 소수인 경우
		{
			prime[count++] = i; // prime 변수에 소수를 추가하고 소수의 개수를 증가시킨다.
		}
	}
}
int main(void)
{
	int data[102]; // n개의 숫자를 담을 배열
	int n;
	int max_insu = 0, max_value = 0; // 최대 소인수 및 N개의 숫자중 가장 큰 값

	scanf("%d", &n);
	for (int i = 1; i <= n; i++) // 최대값 갱신 과정
	{
		scanf("%d", &data[i]);
		if (data[i] > max_value) // 가장 큰 값을 찾아냄.
		{
			max_value = data[i];
		}
	}
	prime_count(max_value); // N개의 숫자 중 가장 큰 값 만큼의 소수를 구한다.

	for (int i = 1; i <= n; i++) // N개의 숫자에 대한 소인수 분해를 진행한다.
	{
		int temp = data[i]; // temp에 
		int j = 0;
		while (temp > 1)
		{
			if (j > max_insu) // (가장 큰 소인수 값 확인)
			{
				max_insu = j; // 가장 큰 소수의 배열 index를 저장.
			}
			if (temp % prime[j] == 0) // temp가 소인수로 나뉘어지는 경우 
			{
				temp /= prime[j]; // 해당 소수로 나눔.
				insu[i][j]++; // i번째 배열에 해당 소인수(개수) 저장.
			}
			else
			{
				j++; // 나뉘어지지 않으면 다음 소수로 나눌 수 있도록 j를 증가.
			}
		}
	}
	for (int i = 1; i <= n; i++) // 소인수 분해한 결과 모든 소수의 개수를 구한다.
	{
		for (int j = 0; j <= max_insu; j++) 
		{
			sum[j] += insu[i][j];
		}
	}
	for (int i = 0; i <= max_insu; i++) // 가장 큰 소수의 index까지 반복.
	{
		for (int j = 1; j <= (sum[i] / n); j++) // 각 소인수의 개수룰 n으로 나눠서 평균을 만듦.
		{
			ans_gcd *= prime[i]; // 평균 개수만큼 소수를 곱한다.
		}
	}
	printf("%d ", ans_gcd); // 평균 개수만큼 소수를 곱하면 최대 점수가 된다.

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= max_insu; j++)
		{
			if (insu[i][j] < sum[j] / n) // 평균 소수의 개수보다 n번째 숫자가 가진 소수의 개수 적은 경우
			{
				ans_move += abs(insu[i][j] - sum[j] / n); // 평균 소수의 개수와 n번째 숫자의 차를 구한다.  
			}
		}
	}
	printf("%d", ans_move); // 이를 모두 더하면 최소 이동 횟수이다.

}