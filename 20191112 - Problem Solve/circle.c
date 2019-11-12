#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int width(int r1, int r2);
int height(int r1, int r2, int d);

int main()
{
    int r1 = 10; // Radius of Circle 1
    int r2 = 7;  // Radius of Circle 2
    int d = 5;   // Distance between center of Circle 1 & Circle 2
    int randreq = 100000;
    int randed = 0;

    int order[2] = {0, 0}; // Order Pair

    // Find Max Point
    int x_max = width(r1, r2);        // Max Width
    int y_max = height(r1, r2, d);    // Max Height
    int maxorder[2] = {x_max, y_max}; // Order Pair of Max Point
    printf("Max Point is (%d,%d)\n", x_max, y_max);

    // Center of each circle
    int r1center[2] = {x_max / 2, r1};
    int r2center[2] = {x_max / 2, r1 + d};
    printf("Center of Circle 1 is at (%d, %d)\n", r1center[0], r1center[1]);
    printf("Center of Circle 2 is at (%d, %d)\n", r2center[0], r2center[1]);

    int countin = 0;

    for (int i = 0; i < randreq; i++)
    {
        randed++;
        float xrand = ((float)rand() / (float)RAND_MAX) * x_max;
        float yrand = ((float)rand() / (float)RAND_MAX) * y_max;
        // printf("Random %d\n", randed);
        // printf("X random = %f\n", xrand);
        // printf("Y random = %f\n\n", yrand);

        float cc1exp = ((xrand - r1center[0]) * (xrand - r1center[0])) + ((yrand - r1center[1]) * (yrand - r1center[1]));
        float cc2exp = ((xrand - r2center[0]) * (xrand - r2center[0])) + ((yrand - r2center[1]) * (yrand - r2center[1]));

        if (cc2exp <= (r2 * r2) && cc1exp > (r1 * r1))
            countin++;
    }

    // printf("In Dot = %d\n\n", countin);

    float area = ((float)countin / (float)randreq) * ((float)x_max * (float)y_max);
    printf("Countin = %d\nRandReq = %d\n", countin, randreq);
    printf("Area is %f\n", area);

    return 0;
}

int width(int r1, int r2) // Find Max Width by finding max value between 2 numbers
{
    int width = (r1 > r2) ? (2 * r1) : (2 * r2);
    return width;
}

int height(int r1, int r2, int d) // Find Max Height by add r1, r2, and d together
{
    int height = r1 + r2 + d;
    return height;
}