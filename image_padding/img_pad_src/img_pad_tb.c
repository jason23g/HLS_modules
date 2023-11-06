#include "img_pad.h"

void print_image(int size ,int image[size][size]){

	for(int i = 0;i < size;i++){
		for(int j= 0;j < size;j++){
			printf("| %d | ",image[j][i]);
		}
		printf("\n");
	}

}

int main(){

	int image_input[IMAGE_SIZE][IMAGE_SIZE];
	int image_pad[IMAGE_SIZE+2*N][IMAGE_SIZE+2*N];

	int i;

	for( i = 0;i < IMAGE_SIZE;i++){

		for(int j = 0; j < IMAGE_SIZE;j++) {
			if(j < IMAGE_SIZE/2)
				image_input[i][j] = 2;
			else
				image_input[i][j] = 4;

		}




	}


	for( i = 0;i < IMAGE_SIZE+2*N;i++){

			for(int j = 0; j < IMAGE_SIZE+2*N;j++) {

					image_pad[i][j] = 0;


			}




		}

	print_image(IMAGE_SIZE,image_input);
	img_pad(image_input,image_pad);
	print_image(IMAGE_SIZE+2*N,image_pad);

}
