#include "DynamicLeav.h"
#include <windows.h>


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string name;
	Leaver client;

	std::cout << "������� ���� ���: ";
	std::cin >> name;
	std::cout << client.leave(name) << "\n";
}