//homework_part2.cpp -- addition for homework_act4.cpp

// Task 7 - Вильям Вингейт заведует службой анализа рынка пиццы.
//			О каждой пицце он записывает следующую информацию:
//			- наименование компании - производителя пиццы, которое
//			может состоять из более чем одного слова
//			- диаметр пиццы
//			- вес пиццы
//			Разработайте структуру, которая может содержать всю
//			эту информацию, и напишите программу, использующую
//			переменную этого типа. Программа должна запрашивать
//			у пользователя каждый из перечисленных показателей
//			и затем отображать введенную информацию.
//			Применяйте cin (или его методы) и cout

#include <iostream>

typedef struct item
{
	char name[40];
	short diameter;
	float weight;
} Pizza;

int main()
{
	using namespace std;
	Pizza * p_pizza = new Pizza;
	cout << "Enter pizza brand name: ";
	cin.get(p_pizza->name, sizeof (p_pizza->name) + 1).get();
	cout << "Enter diameter of pizza(cm): ";
	cin >> p_pizza->diameter;
	cout << "Enter weight of pizza(g.): ";
	cin >> p_pizza->weight;

	cout << "Pizza brand name: " << p_pizza->name << endl;
	cout << "Diameter of pizza: " << p_pizza->diameter << endl;
	cout << "Weight of pizza: " << p_pizza->weight << endl;
	delete p_pizza;

	return 0;
}


//Task 9 -- Выполните упражнение 6, но вместо объявления массива из трёх структур
//			CandyBar используйте операцию new для динамического размещения массива


#include <iostream>

struct CandyBar
{
	char name[20];
	float weight;
	short calories;
};

int main()
{
	using namespace std;
	CandyBar * psnack = new CandyBar [3];

	psnack[0]->name = "Mocha Munch"; //{"Mocha Munch", 2.3, 350};
	//psnack[0]->weight = 2.3;
	//psnack[0]->calories = 350;

	//psnack[1] = {"Alenka", 1.5, 275};
	//psnack[2] = {"Red October", 3.2, 420};
	
	//cout << "pSnack[0].Name: " << psnack[0]->name << endl;
	//cout << "pSnack[0].Weight: " << psnack[0]->weight << endl;
	//cout << "pSnack[0].Calories: " << psnack[0]->calories << endl;

	//cout << "Snack[1].Name: " << snack[1]->name << endl;
	//cout << "Snack[1].Weight: " << snack[1]->weight << endl;
	//cout << "Snack[1].Calories: " << snack[1]->calories << endl;

	//cout << "Snack[2].Name: " << snack[2]->name << endl;
	//cout << "Snack[2].Weight: " << snack[2]->weight << endl;
	//cout << "Snack[2].Calories: " << snack[2]->calories << endl;
	delete [] psnack;

	return 0;
}


//Task 10 -- Напишите программу, которая приглашает пользователя ввести
//			 три результата забега на 40 метров и затем отображает
//			 эти значения и их среднее. Для хранения данных применяйте
//			 объект array

#include <iostream>
#include <array>
#include <cmath>

float blink_time(float a, float b, float c);

int main()
{
	using namespace std;
	array<float, 3> race;

	cout << "Here will be the result of three race" << endl;
	cout << "Enter the time of first race (sec): ";
	cin >> race[0];
	cout << "Enter the time of second race (sec): ";
	cin >> race[1];
	cout << "Enter the time of third race (sec): ";
	cin >> race[2];
	const float result = blink_time(race[0], race[1], race[2]);
	cout << "1st: " << race[0] << endl;
	cout << "2nd: " << race[1] << endl;
	cout << "3rd: " << race[2] << endl;
	cout << "Average time: " << result << endl;

	return 0;
}

float blink_time(float a, float b, float c)
{
	return (a + b + c) / 3;
}