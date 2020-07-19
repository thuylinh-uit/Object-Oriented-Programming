#pragma once
#include"Candidate.h"

class TestCandidate
{
	Candidate a[100];
	int n;
public:
	TestCandidate();
	void NhapDanhSachThiSinh();
	void XuatDanhSachThiSinh();
	~TestCandidate();
};