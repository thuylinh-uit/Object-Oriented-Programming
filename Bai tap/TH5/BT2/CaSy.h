#include "NgheSy.h"

class CaSy :public NgheSy
{
protected:
	string theLoai, debutAlbum;
public:
	CaSy();
	CaSy(string hoTen, string noiSinh, Ngay ngaySinh, string ngheDanh, string theLoai, string debutAlbum)
		:NgheSy(hoTen, noiSinh, ngaySinh, ngheDanh) {
		this->theLoai = theLoai;
		this->debutAlbum = debutAlbum;
	}
	void Input();
	void Output();
	~CaSy();
};

