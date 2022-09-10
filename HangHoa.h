#pragma once
#include "BuuPham.h"
#include<iostream>
using namespace std;
class HangHoa: public BuuPham
{
private:
	double trongluong;
	int phi;
public:
	HangHoa();
	~HangHoa();
	double getphi();
	string getten();
	void Nhap_hh();
	void Xuat_hh();
};

