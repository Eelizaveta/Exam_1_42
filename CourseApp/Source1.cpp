/*�������� �����, ���������� �����, ������� ������� �� 1 �� ��������� ������������� �����, �������� ������ ����� � ����� ������� �������� � �������� ����������� �� 1, ����� ������� ������ �����.����� ���������� � ���� ���������� ������.�������� ������ ������������� �������������� ������*/

#include <iostream>
#include <string>

using namespace std;

class Counter
{
private:
	int a = 0;
	int num = 0;
public:

	Counter(int quantity)
	{
		a = quantity;
	}

	void setA(int quantity)
	{
		this->a = quantity;
	}

	void numbers()
	{
		if (a > 0)
		{
			while (num != a)
			{
				num = num + 1;
				cout << "->" << num << "\n";
			};

			while (a > 1)
			{
				if (a % 2 == 0)
				{
					a = (a - 1);
				}
				else
				{
					a = (a - 2);
				};
				cout << "<-" << a << '\n';
			};
			num = 0;
		};
	}



};

int main()
{
	Counter One(10);
	One.numbers();
	cout << endl;

	One.setA(7);
	One.numbers();
	return 0;
}