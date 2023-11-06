#ifndef IMG_PAD_H_
#define IMG_PAD_H_

#include "ap_cint.h"

#define N 3
#define IMAGE_SIZE 4

void img_pad(int image_input[IMAGE_SIZE][IMAGE_SIZE], int image_pad[IMAGE_SIZE+2*N][IMAGE_SIZE+2*N]);


#endif
