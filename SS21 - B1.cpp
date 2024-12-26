
#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *file;

	file = fopen("bt01.txt", "w");
	if(file == NULL) {
		printf("loi tao hoac mo file");
		return 0;
	}

	char n[50];
	printf("moi ban nhap vao mot chuoi ki tu: ");
	fgets(n, sizeof(n), stdin);
	fprintf("chuoi ban vua nhap la: %s", n);

	fclose(file);

	return 0;
}
