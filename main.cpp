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
//3�� ���
*/


//���� �ϳ��� �Է� �޾Ƽ�
//�� ���ڿ� 2~9 �������� ���
// 10�� �Է¹޾Ҵ� �Ѵٸ�
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
		int ������ = { 0 };
		cin >> ������;
		for (int i = 1; i < 10; i++)
		{
			number[i] = i * ������;
			cout << ������ << " * " << i << " = " << number[i] << endl;
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
//�Լ� �����
//�Լ� �̸� : printTo100
//���� 0~100���� ���
//�Է°� : ����
//��°� : ����
void printTo100()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 100; ++i)
	{
		number[i] = i;
		cout << number[i] << endl;
	}
}

//�Լ� �̸� : printToEven
//���� : 0 ~100���� ¦�� ���
//�Է°� : ����
//��°� : ����
void printToEven()
{
	int number[1000] = { 0 };
	for (int i = 0; i < 100; i++)
	{
		number[i] = i * 2;
		cout << number[i] << endl;
	}
}

//�Լ� �̸� : printToOdd
//���� : 0 ~100���� Ȧ�� ���
//�Է°� : ����	
//��°� : ����
void printToOdd()
{
	int number[1000] = { 0 };
	for (int i = 1; i < 100; i++)
	{
		number[i] = i * 3;
		cout << "3 * " << i << " = " << number[i] << endl;
	}
}

//�Լ��̸� : PRINTtO3Dral
//���� : 0~100���� 3��� ���
//�Է°� : ����
//��°� : ����
void PRINTtO3Dral()
{
	int number[1000] = { 0 };
	for (int i = 0; i < 10; ++i)
	{
		number[i] = 1;

		for (int j = 0; j < i; ++j)//j�� i������ �����ϸ鼭 3�� �����ش�
		{
			number[i] *= 3;
		}
		cout << number[i] << endl;
	}
}

//�Լ��̸� : PrintO3Multil
//���� : 0~100���� 3�¼� ���
//�Է°� : ����
//��°� : ����
void PrintO3Multil()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 100; ++i)
	{
		number[i] = i;
		cout << number[i] << endl;
	}
}

//�Լ��̸� : PrintToGogodan
//���� : n�� ������ * 9 ���� ���
//�Է°� : int n
//��°� : ����
void PrintToGogodan(int n)
{

	for (int i = 1; i < 10; i++)
	{
		int number = i * n;
		cout << n << " * " << i << " = " << number << endl;
	}
}

//�Լ��̸� : PrintFactorial
//���� : n!�� ���� ������� ��ȯ�Ѵ�.
//�Է°� : int n
//��°� : int
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
	//x�� Location X��� �����ϰ� + �������� ���ٰ� - �������� �����̰� ������

	int x = { 0 };
	bool IsMoveRight = true;
	while (1)
	{
		system("cls");
		cout << x << endl;

		if (IsMoveRight)
		{
			//���������� �̵�(+����)
			x++;
			if (x > 100)
			{
				IsMoveRight = false;
			}
		}
		else
		{
			//�������� �̵�(-����)
			x--;
			if (x <= 0)
			{
				IsMoveRight = true;
			}
		}

		Sleep(100);
	}
}