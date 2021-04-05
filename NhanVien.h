bool KTMANV(DS_NHAN_VIEN dsnv,string MANVT);
bool KTCMND(DS_NHAN_VIEN dsnv,string CMNDT);
void ThemThongTinNhanVien(DS_NHAN_VIEN &dsnv,int vitrithem);
void ThemDanhSachNhanVien(DS_NHAN_VIEN &dsnv,int MANVT,string HONVT,string TENNVT,string PHAIT,string CMNDT,int &vtdsnv);
void XoaDanhSachNhanVien(DS_NHAN_VIEN &dsnv, int Vitrixoa);
void LuuFileQuanLy(DS_NHAN_VIEN dsnv,ofstream &fileout);
void GiaiPhongVungNhoDanhSachNhanVien(DS_NHAN_VIEN dsnv);
