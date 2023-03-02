#include "ConBo.h"
#include "ConCuu.h"
#include "ConDe.h"

unsigned short Animal::LuongSua = 0;
unsigned short Animal::SoLuong = 0;
unsigned short ConBo::SoLuong = 0;
unsigned short ConCuu::SoLuong = 0;
unsigned short ConDe::SoLuong = 0;

int main()
{
	srand((int)time(0));
	unsigned short SoBo, SoCuu, SoDe;
	std::cout << "Nhap so luong gia suc ban dau:\n";
	std::cout << "So bo: ";
	std::cin >> SoBo;
	std::cout << "So cuu: ";
	std::cin >> SoCuu;
	std::cout << "So de: ";
	std::cin >> SoDe;
	unsigned short SoLuong = SoBo + SoCuu + SoDe, i = SoLuong;
	Animal** NongTraiVuiVe = new Animal * [SoLuong];
	while (i)
		if (SoDe && SoDe--)
			NongTraiVuiVe[--i] = new ConDe;
		else if (SoCuu && SoCuu--)
			NongTraiVuiVe[--i] = new ConCuu;
		else
			NongTraiVuiVe[--i] = new ConBo;
	while (i < SoLuong)
		std::cout << std::endl << NongTraiVuiVe[i++]->getKeu() << '\n';
	std::cout << "\nSau mot lua sinh va mot luot cho sua:\n";
	std::cout << "So con bo: " << ConBo::SoLuong << std::endl;
	std::cout << "So con cuu: " << ConCuu::SoLuong << std::endl;
	std::cout << "So con de: " << ConDe::SoLuong << std::endl;
	std::cout << "Tong so (lit) sua: " << Animal::LuongSua << std::endl;
}