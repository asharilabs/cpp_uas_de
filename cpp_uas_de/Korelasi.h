#pragma once
#include <iostream>
#include <string>

using namespace std;

struct DataXY {
	float x;
	float y;
};

void ShowInputData(DataXY[], int);
void ShowResumeData(DataXY[], int);

float SigmaX(DataXY[], int);
float SigmaY(DataXY[], int);
float SigmaXY(DataXY[], int);
float SigmaX2(DataXY[], int);
float SigmaY2(DataXY[], int);
string KekuatanHubungan(float);
string KutubHubungan(float);
float KoefDet(float);
float RKorelasi(int, float, float, float, float);