TREE_VAT_TU Khoi_tao_node_vat_tu();
bool TimKiem(TREE_VAT_TU t, string MAVT);
void TimKiemVaHieuChinh(TREE_VAT_TU &t,string MAVTTK,string ThongTinHieuChinh,int LuaChon);
void Insert_node(TREE_VAT_TU &t, Vat_tu *p);
void TimNodeTheMang(TREE_VAT_TU &X, TREE_VAT_TU &Y);
void XoaNode(TREE_VAT_TU &t,string XOAVT);
void VatTuDaLapHoaDon(TREE_VAT_TU &t, string MAVTHD);
void Xoa_Vat_Tu_Khoi_Danh_Sach(TREE_VAT_TU &t, string XOAVT);
void Inorder(TREE_VAT_TU t,TREE_VAT_TU tam[], int &slvt);
void InDanhSachVatTu(TREE_VAT_TU t);
void TraVatTuVeKho(TREE_VAT_TU t,string MAVTTH, float SLVTTH);
void LuuFileVatTu(TREE_VAT_TU tam[],int SLVTTK,ofstream &fileout);
void TimKiemVaInTenVatTu(TREE_VAT_TU t, string MAVT);
void GiaiPhongVungNhoCay(TREE_VAT_TU &t);
