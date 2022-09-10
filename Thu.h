#pragma once
#include "BuuPham.h"
#include <string>
#include<iostream>
using namespace std;
class Thu : public BuuPham
{
private:
	int loaithu;
	int phi;
public:
	Thu();
	~Thu();
	string getten();
	double getphi();
	void Nhap_thu();
	void Xuat_thu();
};

