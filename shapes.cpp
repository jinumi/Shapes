// Designed & Developed by Ͻ Y B E R O Ͷ I Ͻ

#include <iostream>
using namespace std;

int A, B, Number_Of_Rows, Space, Choice;
string Character;

void Info();
void Menu();
void Shortcut_Menu();
void Diamond();
void Triangle();
void Square();
void Circle();
void Heart();
void Putting_Spaces();
void Getting_Input_Diamond();
void Input_Check_Diamond();
void Getting_Input_Triangle();
void Input_Check_Triangle();
void Getting_Input_Circle();
void Input_Check_Circle();
void Getting_Input_Heart();
void Input_Check_Heart();
void Getting_Input_Square();
void Input_Check_Square();
void Getting_Input_Heart();
void Input_Check_Heart();
void Decision();
void Upper_Triangle();
void Lower_Triangle();

int main()
{

	Menu();

	return 0;
}

void Info()
{

	cout << "Designed & Developed by Ͻ Y B E R O Ͷ I Ͻ\n"
		 << "Copyright (C) Ark Corporation. All rights reserved.\n\n";
}

void Menu()
{

	Info();

	cout << "Need you to put any character you want :: \n";
	cin >> Character;

	cout << "Press 1 for Diamond.\n"
		 << "Press 2 for Triangle.\n"
		 << "Press 3 for Square.\n"
		 << "Press 4 for Circle.\n"
		 << "Press 5 for Heart.\n"
		 << "Press 6 to Exit.\n"
		 << "So, what do you want on the screen :: \n";

	cin >> Choice;

	switch (Choice)
	{

	case 1:

		Getting_Input_Diamond();
		break;

	case 2:

		Getting_Input_Triangle();
		break;

	case 3:

		Getting_Input_Square();
		break;

	case 4:

		Getting_Input_Circle();
		break;

	case 5:

		Getting_Input_Heart();
		break;

	case 6:

		exit(1);
		break;

	default:

		cout << "Error!\nYou are not suppose to enter a wrong value!\n";
		Menu();
	}
}

void Shortcut_Menu()
{

	int Shortcut_Menu_Choice;

	cout << "\nDo you want to explore more?\n"
		 << "Press 1 to go to the menu.\n"
		 << "Press 2 to exit.\n"
		 << "So what's it gonna be :: ";

	cin >> Shortcut_Menu_Choice;

	switch (Shortcut_Menu_Choice)
	{

	case 1:

		Menu();
		break;

	case 2:

		exit(1);
		break;

	default:

		cout << "Error!\nYou are not suppose to enter a wrong value!\n";
		Shortcut_Menu();
	}
}

void Getting_Input_Diamond()
{

	cout << "You'll need to put number of rows :: ";
	cin >> Number_Of_Rows;

	Input_Check_Diamond();
}

void Input_Check_Diamond()
{

	if (Number_Of_Rows > 0)
	{

		Diamond();
	}
	else
	{

		cout << "Error!\nYou are not suppose to enter a negitive value!\n";
		Getting_Input_Diamond();
	}
}

void Getting_Input_Triangle()
{

	cout << "You'll need to put number of rows :: ";
	cin >> Number_Of_Rows;

	Input_Check_Triangle();
}

void Input_Check_Triangle()
{

	if (Number_Of_Rows > 0)
	{

		Triangle();
	}
	else
	{

		cout << "Error!\nYou are not suppose to enter a negitive value!\n";
		Getting_Input_Triangle();
	}
}

void Getting_Input_Square()
{

	cout << "You'll need to put number of rows :: ";
	cin >> Number_Of_Rows;

	Input_Check_Square();
}

void Input_Check_Square()
{

	if (Number_Of_Rows > 0)
	{

		Square();
	}
	else
	{

		cout << "Error!\nYou are not suppose to enter a negitive value!\n";
		Getting_Input_Square();
	}
}

void Getting_Input_Circle()
{

	cout << "You'll need to put number of rows :: ";
	cin >> Number_Of_Rows;

	Input_Check_Circle();
}

void Input_Check_Circle()
{

	if (Number_Of_Rows > 0)
	{

		Circle();
	}
	else
	{

		cout << "Error!\nYou are not suppose to enter a negitive value!\n";
		Getting_Input_Circle();
	}
}

void Getting_Input_Heart()
{

	cout << "You'll need to put number of rows :: ";
	cin >> Number_Of_Rows;

	Input_Check_Heart();
}

void Input_Check_Heart()
{

	if (Number_Of_Rows > 0)
	{

		Heart();
	}
	else
	{

		cout << "Error!\nYou are not suppose to enter a negitive value!\n";
		Getting_Input_Heart();
	}
}

void Diamond()
{
	Space = Number_Of_Rows - 1;

	Upper_Triangle();

	Space = 1;

	Lower_Triangle();

	cout << "\n\n";

	Shortcut_Menu();
}

void Triangle()
{

	Space = Number_Of_Rows - 1;

	Upper_Triangle();

	cout << "\n\n";

	Shortcut_Menu();
}

void Square()
{
	for (A = 0; A < Number_Of_Rows; A++)
	{
		B = 0;
		do
		{
			if (B % 2 == 0)
			{
				cout << Character;
			}
			else
			{
				cout << " ";
			}
			B++;
		} while (B < Number_Of_Rows);
		cout << endl;
	}

	Shortcut_Menu();
}

void Circle()
{

	int R = 8, Number_Of_Rows = 2 * R + 1;

	int x, y;

	for (int A = 0; A < Number_Of_Rows; A++)
	{

		for (int B = 0; B < Number_Of_Rows; B++)
		{

			x = A - R;
			y = B - R;

			if (x * x + y * y <= R * R + 1)
			{

				cout << Character;
			}
			else
			{

				cout << " ";
			}
			cout << " ";
		}
		cout << endl;
	}

	cout << "\n\n";

	Shortcut_Menu();
}

void Heart()
{

	int j, i = 0, v, x;

	if (Number_Of_Rows == 0)
	{

		exit(0);
	}
	if (Number_Of_Rows % 2 != 0)
	{

		x = Number_Of_Rows + 1;
	}
	else
	{

		x = Number_Of_Rows;
	}
	if (Number_Of_Rows <= 5)
	{

		v = (x - x / 2) - 1;
	}
	if (Number_Of_Rows > 5)
	{

		v = (x - x / 2);
	}
	while (i < Number_Of_Rows)
	{

		for (int r = Number_Of_Rows - i; r > 0; r--)
		{

			cout << " ";
		}
		for (int j = 0; j <= i * 2; j++)
		{

			if (i <= v)
			{

				if (i == i)
					cout << " ";
			}
			else
			{

				cout << Character;
			}
		}
		for (int l = Number_Of_Rows * 2; l > j; l--)
		{

			cout << " ";
		}
		for (j = 0; j <= i * 2; j++)
		{

			if (i <= v)
			{

				if (i == i)
					cout << " ";
			}
			else
				cout << Character;
		}

		cout << endl;
		i++;
	}

	j = 0;

	while (j < Number_Of_Rows - 2)
	{

		for (int p = 0; p <= Number_Of_Rows * 4; p++)
		{

			cout << Character;
		}
		cout << endl;
		j++;
	}

	int k = 0, s = 0;
	while (k < Number_Of_Rows * 2 - 2)
	{

		for (int r = 0; r < k * 2; r++)
			cout << " ";

		for (int p = Number_Of_Rows * 4; p >= s; p--)

			if (k == 0 && p == Number_Of_Rows * 4 || p == 0)

				cout << " ";
			else
				cout << Character;

		s++;
		s++;
		s++;
		s++;

		cout << endl;
		k++;
	}

	cout << "\n\n";

	Shortcut_Menu();
}

void Putting_Spaces()
{

	B = 1;
	while (B <= Space)
	{

		cout << "  ";
		B++;
	}
}

void Decision()
{

	if (B % 2 == 0)
	{

		cout << Character << " ";
	}
	else
	{

		cout << "  ";
	}
}

void Upper_Triangle()
{

	for (A = 1; A <= Number_Of_Rows; A++)
	{

		Putting_Spaces();

		Space--;

		B = 1;
		do
		{

			Decision();
			B++;

		} while (B <= 2 * A - 1);

		cout << "\n";
	}
}

void Lower_Triangle()
{

	for (A = 1; A <= Number_Of_Rows - 1; A++)
	{

		Putting_Spaces();

		Space++;

		B = 1;
		do
		{

			Decision();
			B++;

		} while (B <= 2 * (Number_Of_Rows - A) - 1);

		cout << "\n";
	}
}