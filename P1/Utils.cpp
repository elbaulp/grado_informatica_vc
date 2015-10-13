/* 
 * File:   Utils.h
 * Author: Alejandro Alcalde <algui91@gmail.com> (elbauldelprogramador.com)
 *
 * Created on October 13, 2015, 11:56 AM
 */

#include "Utils.h"

void gaussConvolution(Mat &im, Mat &mask, Mat &out) {

}

Mat myGetGaussianKernel1D(double sigma) {

    // Kernel size
    int ksize = 2 * sigma + 1;

    Mat kernel(ksize, 1, CV_64F);

    // Compute the mask with the given sigma
    for (int i = -sigma; i <= sigma; i++)
        kernel.at<double>(i, 0) = (double) exp(-.5 * ((i * i) / sigma * sigma));

    return kernel;
}