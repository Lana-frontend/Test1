#include <stdio.h>

void addData() {

    int cols = 5;
    int rows = 5;
    int matrix[cols][rows];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf( "%d - %d\n" , i + 1 , j + 1 );
            scanf("%d", &matrix[i][j]);
            printf("\n");
            //Задаємо матрицю.
        }
    }
    printf("Old Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            printf("%d\t", matrix[i][j]);

        }
        printf("\n");
    }
}


void Sort() {
    int cols = 5;
    int rows = 5;
    int matrix[cols][rows];
    int temp;
    int j = 0;

    for (int n = 0; n < 5; n++) {
        for (int j = 0; j < 5; j++) {
            for (int i = 1; i < 5; i++) {
                temp = matrix[i][j];
                if (temp < matrix[i - 1][j]) {
                    matrix[i][j] = matrix[i - 1][j];        //Сортуємо матрицю.
                    matrix[i - 1][j] = temp;
                }
            }
        }
    }
    printf("Sorted Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);

        }
        printf("\n\n\n");                                 //Виводимо відсортовану матрицю.
    }
    float sum = 0.0;
    float avg,
            mult = 1.0;
    int counter = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
            counter += 1;
        }
        avg = sum / counter;
        printf("Average value of row:" "%f\n", avg);    //Шукаємо середнє арефметичне.
        mult *= avg;
        sum = 0;
        counter = 0;
    }
    printf("\n");
    printf("Multiplucation of average values:" "%f" , mult);
    printf("\n");
}

int main() {


    addData();
    Sort();

    system("pause");
    return 0;
}