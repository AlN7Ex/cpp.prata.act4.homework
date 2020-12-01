//homework_act4 -- act 4, C++, Prata

// Task 1 - Напишите программу как в примере:

// What is your first name ? Betty Sue
// What is your last name ? Yewe
// What letter grade do you deserve ? B
// What is your age ? 22
// Name: Yewe, Betty Sue
// Grade: C
// Age: 22

// Программа должна принимать имена более одного слова, уменьшать значение Grade на одну
// градацию - т.е. на одну букву выше (Предполагается, что пользователь введет А, В или С)


#include <iostream>
#include <string>

int main()
{
	using namespace std;

	cout << "What is your first name ? ";
	string first_name;
	getline(cin, first_name); //cin >> first_name;

	cout << "What is your last name ? ";
	string last_name;
	getline(cin, last_name); //cin >> last_name;

	cout << "What letter grade do you deserve ? ";
	char grade;
	cin.get(grade);

	cout << "What is your age ? ";
	short age;
	cin >> age;

	cout << "Name: " << first_name << ", " << last_name << endl;
	cout << "Grade: " << char(grade + 1) << endl;
	cout << "Age: " << age << endl;

	return 0;
}


// Task 3 - Напишите программу, которая запрашивает у пользователя имя, фамилию, а затем
//			конструирует, сохраняет и отображает третью строку, состоящую из фамилии,
//			за которой следует запятая, пробел и его имя. Используйте массивы char и
//			функции из cstring


#include <iostream>
#include <cstring>

int main()
{
	using namespace std;

	cout << "Enter your first name: ";
	char first_name[20];
	cin.getline(first_name, 20);
	cout << "Enter your last name: ";
	char last_name[20];
	cin.getline(last_name, 20);
	char full_name[40];
	strncpy(full_name, first_name, sizeof(full_name));
	strncat(full_name, ", ", sizeof(full_name));
	strncat(full_name, last_name, sizeof(full_name));
	cout << "Here's the information in a single string: " << full_name << endl;

	return 0;
}


// Task 4 - Напишите программу, которая запрашивает у пользователя имя, фамилию, а затем
//			конструирует, сохраняет и отображает третью строку, состоящую из фамилии,
//			за которой следует запятая, пробел и его имя. Используйте string и
//			методы из string

#include <iostream>
#include <string>

int main()
{
	using namespace std;

	cout << "Enter your first name: ";
	string first_name;
	getline(cin, first_name);

	cout << "Enter your last name: ";
	string last_name;
	getline(cin, last_name);

	string full_name;
	full_name = first_name + ", " + last_name;
	cout << "Here's the information in a single string: " << full_name << endl;

	return 0;
}


// Task 5 - Структура CandyBar содержит три члена. Название коробки конфет,
//			вес (можеть иметь дробную часть), число калорий (целое число).
//			Напишите программу объявляющую эту структуру и создающую
//			переменную типа CandyBar по имени snack, инициализирую её члены
//			значениями "Mocha Munch", 2.3, 350. Инициализация должна быть
//			частью объявления snack. Отобразить содержимое


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
	CandyBar snack {"Mocha Munch", 2.3, 350};

	cout << "Name: " << snack.name << endl;
	cout << "Weight: " << snack.weight << endl;
	cout << "Calories: " << snack.calories << endl;

	return 0;
}


// Task 6 - Структура включает три члена, как в Task 5. Напишите программу, которая
//			создает массив из трех структур CandyBar, инициализирует их значениям
//			по вашему усмотрению и затем отображает содержимое каждой структуры


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
	CandyBar snack[3] { {"Mocha Munch", 2.3, 350},
					    {"Alenka", 1.5, 275},
					    {"Red October", 3.2, 420} };

	cout << "Snack[0].Name: " << snack[0].name << endl;
	cout << "Snack[0].Weight: " << snack[0].weight << endl;
	cout << "Snack[0].Calories: " << snack[0].calories << endl;

	cout << "Snack[1].Name: " << snack[1].name << endl;
	cout << "Snack[1].Weight: " << snack[1].weight << endl;
	cout << "Snack[1].Calories: " << snack[1].calories << endl;

	cout << "Snack[2].Name: " << snack[2].name << endl;
	cout << "Snack[2].Weight: " << snack[2].weight << endl;
	cout << "Snack[2].Calories: " << snack[2].calories << endl;

	return 0;
}