#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    srand(time(NULL));
    int a[10][10] = {{0, 0}};
    int playerX = 0;
    int playerY = 0;
    int choice = 0;
    int oldX = -1;
    int oldY = -1;
    int valueX;
    int valueY;
    bool isEaten = true;
    int counter = 0;

    void newApple() {
        if (isEaten == true) {
            valueX = rand() % 9;
            valueY = rand() % 9;
            isEaten = false;
        }
    }

    void drawBoard() {
        if (oldX != playerX || oldY != playerY) {
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    if (playerX == i && playerY == j) {
                       printf("X ");
                    } else if (valueX == i && valueY == j) {
                        printf("Y ");
                    } else if (counter > 0) {
                        if (oldX == i && oldY == j) {
                            printf("x ");
                        } else {
                            printf("o ");
                        }
                    } else {
                        printf("o ");
                    }
                }
                printf("\n");
            }
        }
        printf("X: %d\n", playerX);
        printf("Y: %d\n", playerY);
//        printf("oldX: %d\n", oldX);
//        printf("oldY: %d\n", oldY);

    }

    while (choice != 9) {
        newApple();
        drawBoard();
//        printf("\n");
//        printf("1) Up\n");
//        printf("2) Down\n");
//        printf("3) Left\n");
//        printf("4) Right\n");
//        printf("9) Quit\n");
//        scanf("%d", &choice);
        printf("\n\n\n\n\n\n\n\n\n");

        // input for movement
        int c = getch();
        oldY = playerY;
        oldX = playerX;
        if (c == 77) {
            playerY++;
        } else if (c == 75) {
            playerY--;
        } else if (c == 80) {
            playerX++;
        }else if (c == 72) {
            playerX--;
        }

        // checking if the player is on top of the apple
        if (playerX == valueX && playerY == valueY) {
            isEaten = true;
            counter++;
        }





    }




    return 0;
}
