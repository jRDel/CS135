//This program adds, subtracts, and multiplies complex numbers. 
#include<stdio.h>

void add(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result);

void subtract(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result);

void multiply(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result);

void read_num(float* real_part, float* imaginary_part);

void read_nums(float* real_part_1, float* imaginary_part_1, float* real_part_2, float* imaginary_part_2);

void print_complex(float real_part, float imaginary_part);

int main(){
	float option=1, endloop=0, resultreal, resultimag, numreal1, numimag1, numreal2, numimag2;
	printf("Complex Number Arithmetic Program:\n");
		while(endloop==0){
		printf("1) Add two complex numbers\n2) Subtract two complex numbers\n3) Multiply two complex numbers\n4) Quit\n");
		printf("Choose an option (1 - 4): ");
		scanf("%f", &option);
			
			if(option==1){
			read_nums(&numreal1, &numimag1, &numreal2, &numimag2);
			//read_num(numreal1, numimag1); will be called by read_nums inside of it
			add(numreal1, numimag1, numreal2, numimag2, &resultreal, &resultimag);
			print_complex(resultreal, resultimag);
			}
			
			else if(option==2){
			read_nums(&numreal1, &numimag1, &numreal2, &numimag2);
			//read_num(numreal1, numimag1); will be called by read_nums inside of it
			subtract(numreal1, numimag1, numreal2, numimag2, &resultreal, &resultimag);
			print_complex(resultreal, resultimag);
			}

			else if(option==3){
			read_nums(&numreal1, &numimag1, &numreal2, &numimag2);
			//read_num(numreal1, numimag1); will be called by read_nums inside of it
			multiply(numreal1, numimag1, numreal2, numimag2, &resultreal, &resultimag);
			print_complex(resultreal, resultimag);
			}
		
			else if(option==4){
			printf("Bye!\n");
			break;
			}
			
			else{
			printf("Please input a valid menu option\n");
			}

		}
return 0;
}

void add(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result){ //This function adds using parameters from read_nums.
	*real_result=real_part_1+real_part_2;
	*imaginary_result=imaginary_part_1+imaginary_part_2;
}

void subtract(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result){//This function subtracts parameters from read_nums.
	*real_result=real_part_1-real_part_2;
	*imaginary_result=imaginary_part_1-imaginary_part_2;
}

void multiply(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result){ //This function multiplies parameters from read_nums.
	*real_result=real_part_1*real_part_2-(imaginary_part_1*imaginary_part_2);
	*imaginary_result=(real_part_1*imaginary_part_2)+(real_part_2*imaginary_part_1);
}

void read_num(float* real_part, float* imaginary_part){ //This function reads the imaginary and real component of one number.
	printf("Please type in the real component: ");
	scanf("%f", real_part);
	printf("Please enter the imaginary component: ");
	scanf("%f", imaginary_part);
}

void read_nums(float* real_part_1, float* imaginary_part_1, float* real_part_2, float* imaginary_part_2){ //This function has the read_num function within it, with pointers to each component of parameters.
	printf("Reading the first imaginary number...\n");
		read_num(real_part_1, imaginary_part_1);
	printf("Reading the second imaginary number...\n");
		read_num(real_part_2, imaginary_part_2);
}

void print_complex(float real_part, float imaginary_part){ //This function simply prints out the result from the operation using the real_part and imaginary_part that is obtained from type function.
	printf("The operation yields %6.3f + %6.3fi\n", real_part, imaginary_part);
}













































