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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
