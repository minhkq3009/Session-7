
#include <stdio.h>

unsigned long so_du = 1000000; 
int ma_pin = 1234;
int lua_chon;
char giao_dich = 'y'; 


int kiem_tra_ma_pin(int pin) {
	if (pin == ma_pin) 
	{
	return 1; 
	} 
	else 
	{
	return 0; 
	}
}

void hien_thi_menu() {
printf("********Chao mung den voi dich vu ATM**************\n");
printf("1. Kiem tra so du\n");
printf("2. Rut tien mat\n");
printf("3. Nap tien\n");
printf("4. Thoat\n");
printf("*********************************************\n\n");
printf("Nhap lua chon cua ban: ");
scanf("%d", &lua_chon);
}

// kiem tra so du
void kiem_tra_so_du() {
printf("\nSo du cua ban la: %lu VND\n", so_du);
}

// Rut tien
void rut_tien() {
unsigned long so_tien;
	printf("\nNhap so tien ban muon rut: ");
	scanf("%lu", &so_tien);
	if (so_tien % 50000 != 0) {
	printf("\nVui long nhap so tien la boi cua 50000\n");
	} 
	else if (so_tien > (so_du - 50000)) {
	printf("\nSo du khong du\n");
	} 
	else {
	so_du = so_du - so_tien;
	printf("\nVui long nhan tien mat\n");
	printf("\nSo du hien tai cua ban la: %lu VND\n", so_du);
}
}

// Nap tien
void nap_tien() {
unsigned long so_tien;
printf("\nNhap so tien ban muon nap: ");
scanf("%lu", &so_tien);
so_du = so_du + so_tien; 
printf("\nSo du hien tai cua ban la: %lu VND\n", so_du);
}

// Hàm chính
int main() {
int pin; 
int sai = 0; 
	while (sai < 3) { 
	printf("Nhap ma pin bi mat cua ban: ");
	scanf("%d", &pin);
	if (kiem_tra_ma_pin(pin)) { 
	do { 
	hien_thi_menu();
		switch (lua_chon) {
			case 1:
				kiem_tra_so_du(); 
			break;
	case 2:
		rut_tien(); 
		break;
	case 3:
		nap_tien();
	break;
	case 4:
	printf("\nCam on ban da su dung dich vu ATM\n");
	break;
	default:
	printf("\nLua chon khong hop le\n");
	}
	printf("\nBan co muon tiep tuc giao dich? (y/n): \n");
	fflush(stdin); 
	scanf("%c", &giao_dich); 
} 
	while (giao_dich == 'y' || giao_dich == 'n');
	printf("\nCam on ban da su dung dich vu ATM\n");
	break;
} 
	else { 
	sai++;
	printf("\nMa pin khong dung. Ban con %d lan thu lai.\n", 3 - sai);
}
}
	if (sai == 3) {
	printf("\nThe nay may cung khong nho duoc ma pin a? The thi dung co dung ATM nua.\n");
	}
return 0;
}




