#include "task1.h"
/*
* ������� ���������� ����������� ������ ��������
* NOD(a,b)=NOD(b, a%b)
* NOD(0,a)=a
* NOD(a,b)=NOD(b,a)
*/
unsigned long NOD(unsigned long a, long unsigned b)
{
	if (b == 0)
		return a;
	return NOD(b, a%b);
}

unsigned long long findValue(unsigned int min, unsigned int max)
{
	unsigned long result = min;
	min++;
	while (max >= min)
	{
		//�����������, �� ��� ������� ������ �� ��������:
		// �� ����� 19 ���� ������������, �.� ������� ���������� �� 20, �������������
		//� ���� ����� �������� �� 20=))
		result = result*(min/NOD(result, min));
		min++;
	}
	return result;
}
