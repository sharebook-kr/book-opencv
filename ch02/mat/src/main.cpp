#include <stdio.h>
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(void)
{
    float data[] = {0, 1, 2, 3, 4, 5, 6, 7};
    Mat src(2, 4, CV_32FC1, data);

    for (int row=0; row < 2; row++) {
        for (int col=0; col < 4; col++) {
            float data = src.at<float>(row, col);
            printf("%f ", data);
        }
        printf("\n");
    }

    printf("rows: %d\n", src.rows);
    printf("cols: %d\n", src.cols);
    printf("step: %d\n", (int)(src.step / sizeof(float)));

    printf("");
    return 0;
}