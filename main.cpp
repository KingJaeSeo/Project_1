#include<iostream>
#include<Windows.h>

using namespace std;

/*
int number[1000] = { 0 };
for (int i = 1; i < 100; i++)
{
	number[i] = i * 2;
	cout << "2 * " << i << " = " << number[i] << endl;
}
}

for (int j = 2; j <= 9; ++j)
{
	for( int i = 1; i <=9;++i)
	{
	int result = 2 * i;
	cout << j << "2 * " << i << " = " << result << endl;
}
}


{
	int number[1000] = { 0 };
	for (int i = 1; i < 100; i++)
	{
		number[i] = i * 3;
		cout << "3 * " << i << " = " << number[i] << endl;
	}
}
//3의 배수
*/


//숫자 하나를 입력 받아서
//그 숫자에 2~9 구구단을 출력
// 10을 입력받았다 한다면
// 10 *1  = 10 
// 10 *2  = 20 
// 10 *3  = 30 
// 10 *4  = 40 
// 10 *5  = 50 
// 10 *6  = 60 
// 10 *7  = 70 
// 10 *8  = 80 
// 10 *9  = 90 

/*
{
		int number[1000] = { 0 };
		int 구구단 = { 0 };
		cin >> 구구단;
		for (int i = 1; i < 10; i++)
		{
			number[i] = i * 구구단;
			cout << 구구단 << " * " << i << " = " << number[i] << endl;
	}
	}
 {
		int a = { 0 };
		cin >> a;

		for (int i = 2; i <= 9; ++i)
		{
			int result = a * i;
			cout << a << " * " << i << " = " << result << endl;
		}
	}

{
	int a = { 0 };
	cin >> a;

	int result = 1;
	for (int i = 1; i < a; ++i)
	{
		result *= 1;
	}
		cout << result << endl;
}
*/
//함수 만들기
//함수 이름 : printTo100
//동작 0~100까지 출력
//입력값 : 없음
//출력값 : 없음
void printTo100()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 100; ++i)
	{
		number[i] = i;
		cout << number[i] << endl;
	}
}

//함수 이름 : printToEven
//동작 : 0 ~100까지 짝수 출력
//입력값 : 없음
//출력값 : 없음
void printToEven()
{
	int number[1000] = { 0 };
	for (int i = 0; i < 100; i++)
	{
		number[i] = i * 2;
		cout << number[i] << endl;
	}
}

//함수 이름 : printToOdd
//동작 : 0 ~100까지 홀수 출력
//입력값 : 없음	
//출력값 : 없음
void printToOdd()
{
	int number[1000] = { 0 };
	for (int i = 1; i < 100; i++)
	{
		number[i] = i * 3;
		cout << "3 * " << i << " = " << number[i] << endl;
	}
}

//함수이름 : PRINTtO3Dral
//동작 : 0~100까지 3배수 출력
//입력값 : 없음
//출력값 : 없음
void PRINTtO3Dral()
{
	int number[1000] = { 0 };
	for (int i = 0; i < 10; ++i)
	{
		number[i] = 1;

		for (int j = 0; j < i; ++j)//j가 i번까지 실행하면서 3을 곱해준다
		{
			number[i] *= 3;
		}
		cout << number[i] << endl;
	}
}

//함수이름 : PrintO3Multil
//동작 : 0~100까지 3승수 출력
//입력값 : 없음
//출력값 : 없음
void PrintO3Multil()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 100; ++i)
	{
		number[i] = i;
		cout << number[i] << endl;
	}
}

//함수이름 : PrintToGogodan
//동작 : n의 구구단 * 9 까지 출력
//입력값 : int n
//출력값 : 없음
void PrintToGogodan(int n)
{

	for (int i = 1; i < 10; i++)
	{
		int number = i * n;
		cout << n << " * " << i << " = " << number << endl;
	}
}

//함수이름 : PrintFactorial
//동작 : n!을 구한 결과값을 반환한다.
//입력값 : int n
//출력값 : int
int PrintFactorial(int n)
{
	int result = 1;
	for (int i = 1; i <= n; ++i)
	{
		result *= i;
	}
	return result;
}

int main()

{
	//x를 Location X라고 지정하고 + 방향으로 갔다가 - 방향으로 움직이게 해주자

	int x = { 0 };
	bool IsMoveRight = true;
	while (1)
	{
		system("cls");
		cout << x << endl;

		if (IsMoveRight)
		{
			//오른쪽으로 이동(+방향)
			x++;
			if (x > 100)
			{
				IsMoveRight = false;
			}
		}
		else
		{
			//왼쪽으로 이동(-방향)
			x--;
			if (x <= 0)
			{
				IsMoveRight = true;
			}
		}

		Sleep(100);
	}
}