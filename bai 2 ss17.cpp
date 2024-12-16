#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000

int main() {
    char str[MAX_LENGTH]; // Chu?i nh?p vào
    char *ptr; // Con tr?
    int choice;
    int letters, digits, specials;

    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai trong chuoi va in ra\n");
        printf("4. Dem so luong chu so trong chuoi va in ra\n");
        printf("5. Dem so luong ky tu dac biet trong chuoi va in ra\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        getchar(); // Xóa b? ð?m phím Enter sau khi nh?p s?

        switch (choice) {
            case 1:
                printf("Nhap vao chuoi: ");
                fgets(str, MAX_LENGTH, stdin); // Nh?p chu?i có d?u cách
                str[strcspn(str, "\n")] = '\0'; // Lo?i b? k? t? xu?ng d?ng cu?i chu?i
                break;

            case 2:
                printf("Chuoi vua nhap: %s\n", str);
                break;

            case 3:
                letters = 0;
                ptr = str; // Gán con tr? tr? vào ð?u chu?i
                while (*ptr != '\0') {
                    if ((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z')) {
                        letters++;
                    }
                    ptr++; // Di chuy?n con tr? t?i k? t? ti?p theo
                }
                printf("So luong chu cai trong chuoi: %d\n", letters);
                break;

            case 4:
                digits = 0;
                ptr = str; // Gán con tr? v? ð?u chu?i
                while (*ptr != '\0') {
                    if (*ptr >= '0' && *ptr <= '9') {
                        digits++;
                    }
                    ptr++;
                }
                printf("So luong chu so trong chuoi: %d\n", digits);
                break;

            case 5:
                specials = 0;
                ptr = str; // Gán con tr? v? ð?u chu?i
                while (*ptr != '\0') {
                    if (!((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z') || 
                          (*ptr >= '0' && *ptr <= '9') || *ptr == ' ')) {
                        specials++;
                    }
                    ptr++;
                }
                printf("So luong ky tu dac biet trong chuoi: %d\n", specials);
                break;

            case 6:
                printf("Thoat chuong trinh.\n");
                return 0;

            default:
                printf("Lua chon khong hop le! Vui long thu lai.\n");
        }
    }
    return 0;
}

