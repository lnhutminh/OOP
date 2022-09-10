#include "BuuDien.h"
#include"Thu.h"
#include "HangHoa.h"
#include<iostream>
#include <string.h>
#include<string>
using namespace std;

void BuuDien::Nhap_ds_bp()
{
	int n, m;
	do
	{
		cout << "\nNhap so luong Thu: ";
		cin >> n;
		if (n < 0)
		{
			cout << "\nKhong hop le. Xin kiem tra lai";
			system("pause");
		}
	} while (n < 0);
	for (int i = 0; i < n; i++)
	{
		cout << "\n\t===== NHAP THONG TIN THU THU " << i + 1 << "=====";
		Thu t;
		t.Nhap_thu();
		this->ds_thu.push_back(t);
	}
	do
	{
		cout << "\nNhap so luong Hang Hoa: ";
		cin >> m;
		if (m < 0)
		{
			cout << "\nKhong hop le. Xin kiem tra lai";
			system("pause");
		}
	} while (m < 0);
	for (int i = 0; i < m; i++)
	{
		cout << "\n\t===== NHAP THONG TIN HANG HOA THU " << i + 1 << "=====";
		HangHoa h;
		h.Nhap_hh();
		this->ds_hh.push_back(h);
	}
}

void BuuDien::Xuat_ds_bp()
{
	cout << "\n====================== THU ======================";
	for (int i = 0; i < this->ds_thu.size(); i++)
	{
		cout << "\n\t===== THU THU " << i + 1 << "=====";
		this->ds_thu[i].Xuat_thu();
	}
	cout << "\n====================== HANG HOA ======================";
	for (int i = 0; i < this->ds_hh.size(); i++)
	{
		cout << "\n\t===== HANG HOA THU " << i + 1 << "=====";
		this->ds_hh[i].Xuat_hh();
	}
}

int BuuDien::Tong_hh()
{
	return this->ds_hh.size();
}
void BuuDien::Xuat_thu_nguoi_ten_X(string x)
{
	for (int i = 0; i < this->ds_thu.size(); i++)
	{
		if (_stricmp(this->ds_thu[i].getten().c_str(),x.c_str()) == 0)
		{
			this->ds_thu[i].Xuat_thu();
		}
	}
}

double BuuDien::Tong_pvc()
{
	double sum_thu = 0.0;
	for (int i = 0; i < this->ds_thu.size(); i++)
	{
		sum_thu += this->ds_thu[i].getphi();
	}

	double sum = sum_thu;
	for (int i = 0; i < this->ds_hh.size(); i++)
	{
		sum += this->ds_hh[i].getphi();
	}
	return sum;
}

int main()
{
	BuuDien bd;
	bd.Nhap_ds_bp();
	bd.Xuat_ds_bp();
	cout << endl << "\nTong hang hoa: " << bd.Tong_hh();
	string x;
	cin.ignore();
	cout << "\nNhap ten nguoi nhan X: ";
	getline(cin, x);
	cout << "\n\t DANH SACH THU CUA NGUOI NHAN TEN X\n";
	bd.Xuat_thu_nguoi_ten_X(x);
	cout << "\n-----> Tong phi van chuyen: " << bd.Tong_pvc();
	return 0;
	system("pause");
}
