#include <iostream>
#include <string>
using namespace std;

struct adress {
	string city;
	string street;
	int number_house;
	int number_apartament;
	int index;
};

void print(adress &person) {
	cout << "Город: " << person.city << endl;
	cout << "Улица: " << person.street << endl;
	cout << "Номер дома: " << person.number_house << endl;
	cout << "Номер квартиры: " << person.number_apartament << endl;
	cout << "Индекс: " << person.index << endl;
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");
	adress person1 = { "Москва", "Арбат", 12, 8, 123456};
	adress person2 = { "Ижевск", "Пушкина", 59, 123, 953769 };
	print(person1);
	
	print(person2);
}
