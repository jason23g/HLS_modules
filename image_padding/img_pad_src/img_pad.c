#include "img_pad.h"

void img_pad(int image_input[IMAGE_SIZE][IMAGE_SIZE], int image_pad[IMAGE_SIZE+2*N][IMAGE_SIZE+2*N]){

	int i;

	for(i = N;i < IMAGE_SIZE+2*N;i++){

		for(int j = N;j < IMAGE_SIZE+2*N;j++){

			if(j < IMAGE_SIZE+N && i < IMAGE_SIZE+N)
				image_pad[j][i] = image_input[j-N][i-N];

		}

	}

// Image padding for the rows

	for(i = N;i < IMAGE_SIZE+N;i++){

		for(int j = 0;j < N;j++){

				image_pad[i][j] = image_input[i-N][IMAGE_SIZE-N+j];
				image_pad[i][IMAGE_SIZE+2*N-j-1] = image_input[i-N][N-j-1];



		}

	}


	// Image padding for the columns
/*
	for(i = 0;i < IMAGE_SIZE;i++){

		for(int j = 0;j < IMAGE_SIZE;j++){

			if(j < 3)
				image_pad[i][N-j] = 0;
			else if((j > IMAGE_SIZE && j < IMAGE_SIZE+N))
				image_pad[IMAGE_SIZE-N+j][i] = 0;



		}

	}
	*/

}
