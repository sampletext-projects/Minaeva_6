#include <iomanip>
#include <iostream>

using namespace std;

double Sum_AP(double a1, double d, double n)
{
	bool proper_a1 = !isnan(a1);
	bool proper_d = !isnan(d);
	bool proper_n = !(isnan(n) || n <= 0);
	double result = 0;
	if (proper_a1 && proper_d && proper_n)
	{
		result = ((2 * a1 + d * (n - 1)) / 2) * n;
	}
	return result;
}

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Выполнила Минаева Полина Валерьевна УТН - 111\n";
	cout << "Программа для рассчёта суммы арифметической последовательности\n";

	int k;
	do
	{
		double a1, d, n;

		cout << "Введите A1: ";
		cin >> a1;
		cout << "Введите D: ";
		cin >> d;
		cout << "Введите N: ";
		cin >> n;

		double result = Sum_AP(a1, d, n);
		if (result == 0)
		{
			cout << "Введённые данные неверны!\n";
		}
		else
		{
			cout << "Результат: " << result << "\n";
		}
		
		cout << "Повторить ввод (1)?: ";
		cin >> k;
	}
	while (k == 1);

	system("pause");

	return 0;
}
