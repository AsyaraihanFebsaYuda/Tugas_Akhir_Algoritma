#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int lemparDadu() {
    return rand() % 6 + 1;
}

void tampilkanGambarDadu(int nilai) {
    switch (nilai) {
        case 1:
            printf(" _______\n");
            printf("|       |\n");
            printf("|   *   |\n");
            printf("|       |\n");
            printf(" -------\n");
            break;
        case 2:
            printf(" _______\n");
            printf("| *     |\n");
            printf("|       |\n");
            printf("|     * |\n");
            printf(" -------\n");
            break;
        case 3:
        	printf(" _______\n");
            printf("| *     |\n");
            printf("|   *   |\n");
            printf("|     * |\n");
            printf(" -------\n"); 
            break;
        case 4:
        	printf(" _______\n");
            printf("| *   * |\n");
            printf("|       |\n");
            printf("| *   * |\n");
            printf(" -------\n"); 
            break;
        case 5:
        	printf(" _______\n");
            printf("| *   * |\n");
            printf("|   *   |\n");
            printf("| *   * |\n");
            printf(" -------\n"); 
            break;
        case 6:
        	printf(" _______\n");
            printf("| *   * |\n");
            printf("| *   * |\n");
            printf("| *   * |\n");
            printf(" -------\n"); 
            break;
        default:
            printf("Nilai dadu tidak valid.\n");
            break;
    }
}

int main() {
    int hasilLempar;
    char lanjut;

    srand(time(NULL));

    printf("**********************************************\n");
    printf("*                                            *\n");
    printf("*          Selamat Datang di Program         *\n");
    printf("*                Melempar Dadu               *\n");
    printf("*                                            *\n");
    printf("**********************************************\n");
    
    printf("Press Enter untuk melempar dadu...");

    getchar();

    do {
        hasilLempar = lemparDadu();
		printf("Tunggu sebentar...\n");
		sleep(2);
		
        printf("Hasil lempar dadu: %d\n", hasilLempar);

        tampilkanGambarDadu(hasilLempar);

		sleep(2);

        printf("Ingin melempar dadu lagi? (y/n): ");
        scanf(" %c", &lanjut);

    } while (lanjut == 'y' || lanjut == 'Y');

   
    printf("**********************************************\n");
    printf("*                                            *\n");
    printf("*       Terima Kasih Telah Mneggunakan       *\n");
    printf("*           Program Melempar Dadu            *\n");
    printf("*               Sampai Jumpa                 *\n");
    printf("*                                            *\n");
    printf("**********************************************\n");
    
    return 0;
}
