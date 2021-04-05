#include "KhaiBaoCauTruc.h"
#include "TaoKhung.h"
#include "XuLy.h"
#include "VatTu.h"
#include "NhanVien.h"
#include "HoaDon.h"
#include "XuLyChuoi.h"
#include "console.h"
#include<fstream>
#include<stdlib.h>
#include <unistd.h>

#define SLVTKB 500
#define TrangXanh 159
#define XanhTrang 241
#define TrangDen 15
//int color;

//======= THUC HIEN MENU CHUONG TRINH
void Menu()
{
	//VO HIEU HOA BOI DEN
	DisableSelection();
	resizeConsole(1500, 750);
	Name();
//	remove_scrollbar();
	DisableResizeWindow();
	DisableCtrButton(0,1,1);
	system("color f0");
	TREE_VAT_TU t = NULL;
	TREE_VAT_TU r = NULL;
	DS_NHAN_VIEN dsnv;
	int SLVTTK = 0;
	int TONGSOHOADON=0;
	string MAVTF;
	ifstream filein;
	ofstream fileout;
	filein.open("VATTU.txt");
		while(getline(filein,MAVTF,','))
		{
			r = Khoi_tao_node_vat_tu();
			r->MAVT = MAVTF;
			getline(filein,r->TENVT,',');
			getline(filein,r->DVT,',');
			filein>>r->SOLT;
			r->TrangThaiLapHoaDon = false;
			SLVTTK++;
			filein.ignore(1);
			Insert_node(t,r);
		}
	filein.close();
	TREE_VAT_TU tam[SLVTTK];
	int slvt=0;
	Inorder(t,tam,slvt);//slvt LA BIEN SO LUONG PHAN TU TRONG DANH SACH
	//============== DOC FILE NHAN VIEN ===============
	filein.open("QUANLY.txt");
	string ChuoiTam;
	HOA_DON hd;
	while(getline(filein,ChuoiTam,',') && ChuoiTam != "")
	{
		dsnv.nv[dsnv.slnv] = new NHAN_VIEN;
		dsnv.nv[dsnv.slnv]->MANV = atoi(ChuoiTam.c_str());
		getline(filein,dsnv.nv[dsnv.slnv]->HO,',');
		getline(filein,dsnv.nv[dsnv.slnv]->TEN,',');
		getline(filein,dsnv.nv[dsnv.slnv]->PHAI,',');
		getline(filein,dsnv.nv[dsnv.slnv]->CMND,',');
		filein>>dsnv.nv[dsnv.slnv]->SLHD;
		TONGSOHOADON+=dsnv.nv[dsnv.slnv]->SLHD;
		
		dsnv.nv[dsnv.slnv]->pHead = new NODE_HOA_DON;
		dsnv.nv[dsnv.slnv]->pHead = NULL;
		for(int i=0; i<dsnv.nv[dsnv.slnv]->SLHD; i++)
		{
			filein.ignore(1);
			getline(filein,hd.SOHD,',');
			getline(filein,ChuoiTam,',');
			hd.NgayLap.day = atoi(ChuoiTam.c_str());
			getline(filein,ChuoiTam,',');
			hd.NgayLap.month = atoi(ChuoiTam.c_str());
			getline(filein,ChuoiTam,',');
			hd.NgayLap.year = atoi(ChuoiTam.c_str());
			getline(filein,hd.LOAI,',');
			getline(filein,ChuoiTam,',');
			hd.TONGTRIGIA = atoi(ChuoiTam.c_str());
			filein>>hd.ds_chi_tiet_hd.slvthd;
			NODE_HOA_DON *p = KhoiTaoNode(hd);
			ThemCuoi(dsnv.nv[dsnv.slnv]->pHead,p);
			for(int j=0; j<hd.ds_chi_tiet_hd.slvthd;j++)
			{
				filein.ignore(1);
				getline(filein,p->Data.ds_chi_tiet_hd.ds[j].MAVT,',');
				getline(filein,ChuoiTam,',');
				p->Data.ds_chi_tiet_hd.ds[j].SLVT = atof(ChuoiTam.c_str());
				getline(filein,ChuoiTam,',');
				p->Data.ds_chi_tiet_hd.ds[j].DONGIA = atof(ChuoiTam.c_str());
				getline(filein,ChuoiTam,',');
				p->Data.ds_chi_tiet_hd.ds[j].VAT = atof(ChuoiTam.c_str());
				filein>>p->Data.ds_chi_tiet_hd.ds[j].TRIGIA;
				if(hd.LOAI == "N")
				{
					for(int s=0; s<SLVTTK; s++)
					{
						if(tam[s]->MAVT == p->Data.ds_chi_tiet_hd.ds[j].MAVT)
						{
							tam[s]->SOLT+=p->Data.ds_chi_tiet_hd.ds[j].SLVT;
							break;
						}
					}
				}
				else if(hd.LOAI == "X")
				{
					p->Data.ds_chi_tiet_hd.ds[j].TRANGTHAI = 1;
					for(int s=0; s<SLVTTK; s++)
					{
						if(tam[s]->MAVT == p->Data.ds_chi_tiet_hd.ds[j].MAVT)
						{
							tam[s]->SOLT-=p->Data.ds_chi_tiet_hd.ds[j].SLVT;
							break;
						}
					}
				}
			}
		}
		dsnv.slnv++;
	}
	filein.close();

	int Vitri = 1;
	bool KT = true;//Bien KT kiem tra dieu kien ket thuc vong lap
	while(KT)
	{
		ShowConsoleCursor(false);
		TaoKhungGiaoDienChinh(Vitri);
		switch(Vitri)
		{
			//======== 1.THEM VAT TU ===========
			case 1:{
				MenuThemVatTu(t,tam,SLVTTK,dsnv);
				break;
			}
			//======== 2. IN DANH SACH VAT TU
			case 2: {
				TaoKhungInVatTu(tam,SLVTTK);
				break;
			}
			//======== 3. THEM NHAN VIEN ===========
			case 3:{
				TextColor(TrangDen);
				ChucNangNhanVien(dsnv);
				break;
			}
			//======== 4. IN DANH SACH NHAN VIEN ===========
			case 4:{
				TaoKhungInNhanVien(dsnv);
				break;
			}
			//========= 5. LAP HOA DON ===============
			case 5:{
				ChucNangLapHoaDon(t,tam,SLVTTK,dsnv,TONGSOHOADON);
				break;
			}
			//========= 6. TRA HANG ==================
			case 6:{
				NODE_HOA_DON* HoaDonTam[TONGSOHOADON];
				int SLHDX=0;
				//LUU HOA DON VAO MANG TAM
				DuyetDanhSachHoaDon(dsnv,HoaDonTam,SLHDX);
				//====
				TimKiemHoaDon(t,HoaDonTam,SLHDX,dsnv);
//				GIAI PHONG VUNG NHO MANG CON TRO TAM
				for(int i=0; i<SLHDX; i++)
				{
					HoaDonTam[i] = NULL;
					delete HoaDonTam[i];
				}
				break;
			}
			//========== 7. IN HOA DON ===========
			case 7:{
				system("cls");
				system("color f0");
				int SLHDX=0;
				InHoaDon(t,dsnv,TONGSOHOADON);
				break;
			}
			//========== 8.LIET KE HOA DON =========
			case 8:{
				LietKeHoaDon(t,dsnv);
				break;
			}
			
			//========== 9.THONG KE HOA DON ==========
			case 9:{
				ThongKeDoanhThu(dsnv);
				break;
			}
			//=========== 0. THOAT CHUONG TRINH =========
			case 0:{
				system("cls");
				system("color f0");
				string a;
				TextColor(242);
				filein.open("ChuongTrinhKetThuc.txt");
				int i=0;
				while(!filein.eof())
				{
					getline(filein,a);
					gotoXY(10,3+i);
					cout<<a;
					i++;
				}
				filein.close();
				
				//GHI FILE
				fileout.open("VATTU.txt");
				LuuFileVatTu(tam,SLVTTK,fileout);
				fileout.close();
				fileout.open("QUANLY.txt");
				LuuFileQuanLy(dsnv,fileout);
				fileout.close();
				GiaiPhongVungNhoCay(t);
				GiaiPhongVungNhoDanhSachNhanVien(dsnv);
				return;
			}
		}
	}
}
