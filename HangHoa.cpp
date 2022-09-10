#include "HangHoa.h"
#include <string>
#include<iostream>
using namespace std;
HangHoa::HangHoa()
{
	BuuPham::BuuPham();
	this->trongluong = 0.0;
	this->phi = 0;
}
HangHoa::~HangHoa()
{

}
void HangHoa::Nhap_hh()
{
	BuuPham::Nhap_bp();
	do
	{
		cout << "\nNhap trong luong: ";
		cin >> this->trongluong;
		if (this->trongluong <= 0)
		{
			cout << "\nNhap khong hop le. Xin kiem tra lai";
			system("pause");
		}
	} while (this->trongluong <= 0);
}
void HangHoa::Xuat_hh()
{
	BuuPham::Xuat_bp();
	cout << "\nTrong luong: " << this->trongluong;
	cout << "\nPhi van chuyen: " << 10000 * this->trongluong;
}
double HangHoa::getphi()
{
	return this->trongluong * 10000;;
}
string HangHoa::getten()
{
	return this->nguoinhan;
}