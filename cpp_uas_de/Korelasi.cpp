#include "Korelasi.h"

float SigmaX(DataXY dataXY[], int n) {
	float t = 0;

	for (int i = 0; i < n; i++)
		t += dataXY[i].x;

	return t;
}

float SigmaY(DataXY dataXY[], int n) {
	float t = 0;
	for (int i = 0; i < n; i++)
		t += dataXY[i].y;
	return t;
}

float SigmaXY(DataXY dataXY[], int n) {
	float t = 0;
	for (int i = 0; i < n; i++)
		t += (dataXY[i].x * dataXY[i].y);
	return t;
}

float SigmaX2(DataXY dataXY[], int n) {
	float t = 0;
	for (int i = 0; i < n; i++)
		t += pow(dataXY[i].x, 2);
	return t;
}

float SigmaY2(DataXY dataXY[], int n) {
	float t = 0;
	for (int i = 0; i < n; i++)
		t += pow(dataXY[i].y, 2);
	return t;
}

float RKorelasi(int n, float at_ki, float at_ka, float ba_ki, float ba_ka) {
	return ((n * at_ki) - (at_ka)) / (sqrt(ba_ki) * sqrt(ba_ka));
}

void ShowInputData(DataXY _dataXY[], int n) {

	cout << "Input Data XY" << endl;
	for (int i = 0; i < n; i++)
		cout << "#" << (i + 1) << "-X: " << _dataXY[i].x << ",-Y: " << _dataXY[i].y << endl;
	cout << "-----End of Show Data-----" << endl;
}

string KekuatanHubungan(float _r) {
	string hasil = "";

	if (_r < 0.09f) hasil = "Diabaikan";
	else if (_r < 0.29) hasil = "Rendah";
	else if (_r < 0.49) hasil = "Moderat";
	else if (_r < 0.7) hasil = "Sedang";
	else hasil = "Sangat Kuat";

	return hasil;
}

string KutubHubungan(float _r) {
	if (_r > 0) return "Hubungan Positif";
	else if (_r < 0) return "Hubungan Negatif";
	else return "Tidak Ada Hubungan";
}

float KoefDet(float _r) {
	return pow(_r, 2) * 100;
}

void ShowResumeData(DataXY _data[], int _n) {

	float _sigmaX = SigmaX(_data, _n);
	float _sigmaY = SigmaY(_data, _n);
	float _sigmaXY = SigmaXY(_data, _n);
	float _sigmaX2 = SigmaX2(_data, _n);
	float _sigmaY2 = SigmaY2(_data, _n);
	float _sigmaXDiku = pow(_sigmaX, 2);
	float _sigmaYDiku = pow(_sigmaY, 2);
	float _korelasi = RKorelasi(_n, _sigmaXY, (_sigmaX * _sigmaY),
		((_n * _sigmaX2) - _sigmaXDiku), ((_n * _sigmaY2) - _sigmaYDiku));
	string _kekuatan = KekuatanHubungan(_korelasi);
	string _kutub = KutubHubungan(_korelasi);
	float _koefdet = KoefDet(_korelasi);

	cout << "====Resume Calculating Data====" << endl;
	cout << "Sigma X: " << _sigmaX << endl;
	cout << "Sigma Y: " << _sigmaY << endl;
	cout << "Sigma XY: " << _sigmaXY << endl;
	cout << "Sigma X^2: " << _sigmaX2 << endl;
	cout << "Sigma Y^2: " << _sigmaY2 << endl;
	cout << "(Sigma X)^2: " << _sigmaXDiku << endl;
	cout << "(Sigma Y)^2: " << _sigmaYDiku << endl;
	cout << "korelasi: " << _korelasi << endl;
	cout << "Kekuatan Hubungan: " << _kekuatan << endl;
	cout << "Kutub Hubungan: " << _kutub << endl;
	cout << "Koefisien Determinasi: " << _koefdet << "%" << endl;
	cout << "End of Resume Calculating Data" << endl;
}