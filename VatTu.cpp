#include "KhaiBaoCauTruc.h"
#include "VatTu.h"
#include<conio.h>
#include "console.h"
#include<fstream>
#include<iostream>
using namespace std;


//========== KHOI TAO NODE ==============
TREE_VAT_TU Khoi_tao_node_vat_tu()
{
	TREE_VAT_TU p = new Vat_tu;
	p->pLeft = NULL;
	p->pRight = NULL;
	return p;
}

//============ TIM KIEM PHAN TU TRONG CAY ==============
//========= TIM KIEM VAT TU ===============
bool TimKiem(TREE_VAT_TU t, string MAVT)
{
	while(t != NULL)//DUYET CAY DEN NULL HOAC TIM THAY THI DUNG
	{
		if(t->MAVT < MAVT)
		{
			t = t->pRight;
		}	
		else if(t->MAVT > MAVT)
		{
			t = t->pLeft;
		}
		else if(t->MAVT == MAVT)
		{
			return true;
		}
	}
	return false;
}

//============ HIEU CHINH THONG TIN VAT TU ============
void TimKiemVaHieuChinh(TREE_VAT_TU &t,string MAVTTK,string ThongTinHieuChinh,int LuaChon)
{	
	if(t->MAVT < MAVTTK)
	{
		TimKiemVaHieuChinh(t->pRight,MAVTTK,ThongTinHieuChinh,LuaChon);
	}
	else if(t->MAVT > MAVTTK)
	{
		TimKiemVaHieuChinh(t->pLeft,MAVTTK,ThongTinHieuChinh,LuaChon);
	}
	else if(t->MAVT == MAVTTK)
	{
		if(LuaChon == 1)
			{
				t->TENVT = ThongTinHieuChinh;
			}
			else if(LuaChon == 2)
			{
				t->DVT = ThongTinHieuChinh;
			}
			return;
	}
}


//=========== THEM NODE VAO TRONG CAY ==============
void Insert_node(TREE_VAT_TU &t, TREE_VAT_TU r)
{
	if(t == NULL)
	{
		t = r;
		t->TrangThaiLapHoaDon = false;
	}
	else
	{
		if(t->MAVT < r->MAVT)
		{
			Insert_node(t->pRight,r);
		}
		else if(t->MAVT > r->MAVT)
		{
			Insert_node(t->pLeft,r);
		}
		else if(t->MAVT == r->MAVT)
		{
			cout<<"\nMa vat tu bi trung vui long nhap lai";
			system("pause");
		}
	}
}



//============= TIM NODE THE MANG =============
void TimNodeTheMang(TREE_VAT_TU &X, TREE_VAT_TU &Y)
{
	if(Y->pRight != NULL)
	{
		TimNodeTheMang(X,Y->pRight);
	}
	else
	{
		X = Y;
		Y = Y->pLeft;
	}
}

//============= XOA NODE KHOI CAY =============
void XoaNode(TREE_VAT_TU &t,string XOAVT)
{
	if(t!=NULL)
	{
		if(t->MAVT < XOAVT)
		{
			XoaNode(t->pRight,XOAVT);
		}
		else if(t->MAVT > XOAVT )
		{
			XoaNode(t->pLeft,XOAVT);
		}
		else
		{
			TREE_VAT_TU X = t;
			if(t->pRight == NULL)
			{
				t = t->pLeft;
			}
			else if(t->pLeft == NULL)
			{
				t =t->pRight;
			}
			else
			{
				TimNodeTheMang(X,t->pLeft);
			}
			delete X;
		}
	}
}

void VatTuDaLapHoaDon(TREE_VAT_TU &t, string MAVTHD)
{
		if(t->MAVT < MAVTHD)
		{
			cout<<t->MAVT<<" "<<MAVTHD;
			VatTuDaLapHoaDon(t->pRight,MAVTHD);
		}
		else if(t->MAVT > MAVTHD)
		{
			cout<<t->MAVT<<" "<<MAVTHD;
			VatTuDaLapHoaDon(t->pLeft,MAVTHD);
		}
		else if(t->MAVT == MAVTHD)
		{
			t->TrangThaiLapHoaDon = true;
			return;
		}
}



//============== XOA VAT TU KHOI DANH SACH ================
void Xoa_Vat_Tu_Khoi_Danh_Sach(TREE_VAT_TU &t, string XOAVT)
{
		XoaNode(t,XOAVT);
}

//============= DUYET CAY LNR (DE QUY)  ===============
void Inorder(TREE_VAT_TU t,TREE_VAT_TU tam[], int &slvt)
{
	if(t != NULL)
	{
		Inorder(t->pRight,tam,slvt);
			tam[slvt] = t;
			slvt++;
		Inorder(t->pLeft,tam,slvt);
	}
}


void LuuFileVatTu(TREE_VAT_TU tam[],int SLVTTK,ofstream &fileout)
{
	for(int i=0; i<SLVTTK; i++)
	{
		fileout<<tam[i]->MAVT<<","<<tam[i]->TENVT<<","<<tam[i]->DVT<<","<<tam[i]->SOLT;
		if(i<SLVTTK-1)
		{
			fileout<<endl;
		}
	}
}


void InDanhSachVatTu(TREE_VAT_TU t)
{
	if(t != NULL)
	{
		InDanhSachVatTu(t->pRight);
		cout<<t->MAVT<<"\t";
		cout<<t->TENVT<<"\t";
		cout<<t->DVT<<"\t";
		cout<<t->SOLT<<"\n";	
		InDanhSachVatTu(t->pLeft);
	}
}


void TraVatTuVeKho(TREE_VAT_TU t,string MAVTTH, float SLVTTH)
{
	if(MAVTTH < t->MAVT)
	{
		TraVatTuVeKho(t->pLeft,MAVTTH,SLVTTH);
	}
	else if(MAVTTH > t->MAVT)
	{
		TraVatTuVeKho(t->pRight,MAVTTH,SLVTTH);
	}
	else if(MAVTTH == t->MAVT)
	{
		t->SOLT+=SLVTTH;
		return;
	}
}



void TimKiemVaInTenVatTu(TREE_VAT_TU t, string MAVT)
{
	while(t != NULL)//DUYET CAY DEN NULL HOAC TIM THAY THI DUNG
	{
		if(t->MAVT < MAVT)
		{
			t = t->pRight;
		}	
		else if(t->MAVT > MAVT)
		{
			t = t->pLeft;
		}
		else if(t->MAVT == MAVT)
		{
			cout<<t->TENVT;
			return;
		}
	}
	return; 
}

void GiaiPhongVungNhoCay(TREE_VAT_TU &t)
{
	if(t == NULL)
	{
		return;
	}
	GiaiPhongVungNhoCay(t->pLeft);
	GiaiPhongVungNhoCay(t->pRight);
	delete t;
}

