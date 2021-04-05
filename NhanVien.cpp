#include "KhaiBaoCauTruc.h"
#include "NhanVien.h"
#include<conio.h>
#include "console.h"
#include<fstream>
#include<iostream>
using namespace std;
#include<stdlib.h>


bool KTMANV(DS_NHAN_VIEN dsnv,string MANVT)
{
	for(int i=0; i<dsnv.slnv; i++)
	{
		if(dsnv.nv[i]->MANV == atoi(MANVT.c_str()))
		{
			return true;
		}
	}
	return false;
}

bool KTCMND(DS_NHAN_VIEN dsnv,string CMNDT)
{
	for(int i=0; i<dsnv.slnv; i++)
	{
		if(dsnv.nv[i]->CMND == CMNDT)
		{
			return true;
		}
	}
	return false;
}


void ThemThongTinNhanVien(DS_NHAN_VIEN &dsnv,int vitrithem)
{		 
	dsnv.nv[dsnv.slnv] = new NHAN_VIEN;
	for(int i=dsnv.slnv; i>vitrithem; i--)
	{
		dsnv.nv[i]->MANV = dsnv.nv[i-1]->MANV;
		dsnv.nv[i]->HO = dsnv.nv[i-1]->HO;
		dsnv.nv[i]->TEN = dsnv.nv[i-1]->TEN;
		dsnv.nv[i]->PHAI = dsnv.nv[i-1]->PHAI;
		dsnv.nv[i]->CMND = dsnv.nv[i-1]->CMND;
	}
}

void ThemDanhSachNhanVien(DS_NHAN_VIEN &dsnv,int MANVT,string HONVT,string TENNVT,string PHAIT,string CMNDT,int &vtdsnv)
{
	for(int i=0; i<dsnv.slnv; i++)
	{
		if(dsnv.nv[i]->TEN >=  TENNVT)//TIEN HANH DICH VI TRI
		{
			for(int j=i; j<dsnv.slnv; j++)
			{
//				TextColor(15);
//				cout<<dsnv.nv[j]->HO<<" "<<dsnv.nv[j]->TEN;
				if(dsnv.nv[j]->HO >= HONVT &&dsnv.nv[j]->TEN == TENNVT)
				{
					ThemThongTinNhanVien(dsnv,j);
					dsnv.nv[j]->MANV = MANVT;
					dsnv.nv[j]->HO = HONVT;
					dsnv.nv[j]->TEN = TENNVT;
					dsnv.nv[j]->PHAI = PHAIT;
					dsnv.nv[j]->CMND = CMNDT;
					vtdsnv = j;
					dsnv.slnv++;
					return;
				}
				else if(dsnv.nv[j]->TEN > TENNVT)
				{
					ThemThongTinNhanVien(dsnv,j);
					dsnv.nv[j]->MANV = MANVT;
					dsnv.nv[j]->HO = HONVT;
					dsnv.nv[j]->TEN = TENNVT;
					dsnv.nv[j]->PHAI = PHAIT;
					dsnv.nv[j]->CMND = CMNDT;
					vtdsnv = j;
					dsnv.slnv++;
					return;
				}
			}
		}
	}
					dsnv.nv[dsnv.slnv] = new NHAN_VIEN;
					dsnv.nv[dsnv.slnv]->MANV = MANVT;
					dsnv.nv[dsnv.slnv]->HO = HONVT;
					dsnv.nv[dsnv.slnv]->TEN = TENNVT;
					dsnv.nv[dsnv.slnv]->PHAI = PHAIT;
					dsnv.nv[dsnv.slnv]->CMND = CMNDT;
					vtdsnv = dsnv.slnv;
					dsnv.slnv++;
}

void XoaDanhSachNhanVien(DS_NHAN_VIEN &dsnv, int Vitrixoa)
{
	for(int i=Vitrixoa; i<dsnv.slnv-1; i++)
	{
		dsnv.nv[i]->MANV = dsnv.nv[i+1]->MANV;
		dsnv.nv[i]->HO = dsnv.nv[i+1]->HO;
		dsnv.nv[i]->TEN = dsnv.nv[i+1]->TEN;
		dsnv.nv[i]->PHAI = dsnv.nv[i+1]->PHAI;
		dsnv.nv[i]->CMND = dsnv.nv[i+1]->CMND;
	}
	dsnv.nv[dsnv.slnv] = NULL;
	delete dsnv.nv[dsnv.slnv];
	dsnv.slnv--;
}

void LuuFileQuanLy(DS_NHAN_VIEN dsnv,ofstream &fileout)
{
	int demhoadon =1;
	for(int i=0; i<dsnv.slnv; i++)
				{
					fileout<<dsnv.nv[i]->MANV<<","<<dsnv.nv[i]->HO<<","<<dsnv.nv[i]->TEN<<","<<dsnv.nv[i]->PHAI<<","<<dsnv.nv[i]->CMND<<","<<dsnv.nv[i]->SLHD<<endl;
					NODE_HOA_DON* p = dsnv.nv[i]->pHead;
					demhoadon=1;
						while(p != NULL)
						{
							fileout<<p->Data.SOHD<<","<<p->Data.NgayLap.day<<","<<p->Data.NgayLap.month<<","<<p->Data.NgayLap.year<<","<<p->Data.LOAI<<","<<(size_t)p->Data.TONGTRIGIA<<","<<p->Data.ds_chi_tiet_hd.slvthd<<"\n";
							for(int j=0; j<p->Data.ds_chi_tiet_hd.slvthd;j++)
							{
								fileout<<p->Data.ds_chi_tiet_hd.ds[j].MAVT<<","<<p->Data.ds_chi_tiet_hd.ds[j].SLVT<<","<<(size_t)p->Data.ds_chi_tiet_hd.ds[j].DONGIA<<","<<p->Data.ds_chi_tiet_hd.ds[j].VAT<<","<<(size_t)p->Data.ds_chi_tiet_hd.ds[j].TRIGIA;
								if(i == dsnv.slnv-1 && demhoadon == dsnv.nv[i]->SLHD && j == p->Data.ds_chi_tiet_hd.slvthd-1)
								{
									break;
								}
								if(i <=dsnv.slnv-1 && demhoadon <= dsnv.nv[i]->SLHD && j < p->Data.ds_chi_tiet_hd.slvthd)//LOAI BO KHOANG TRANG CUOI CUNG CUA GHI FILE
								{
									fileout<<"\n";
								}
							}
							p=p->pNext;
							demhoadon++;
						}
				}
}

void GiaiPhongVungNhoDanhSachNhanVien(DS_NHAN_VIEN dsnv)
{
	for(int i=0; i<dsnv.slnv; i++)
	{
		delete dsnv.nv[i];
	}
}
