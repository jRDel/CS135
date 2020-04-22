//This program implements four of the string library functions using pointers: strcopy, strconcat. strcomp, and strlength.

#include <stdio.h>
#define LEN 20

int strlength(char* tostr);
char* strcopy(char* tostr2, char* tostr1);
char* strconcat(char* tostr2, char* tostr1);
int strcomp(char* tostr1, char* tostr2);

int main(){

char str1[LEN+1], str2[LEN+1];
int comparetf;

printf("Please enter the first string:");
scanf("%s", str1);
printf("Please enter the second string:");
scanf("%s", str2);

printf("The length of string 1 is: %d\n", strlength(str1));
printf("The length of string 2 is: %d\n", strlength(str2));

comparetf=strcomp(str1, str2);
	if(comparetf<0){
	printf("String 1 comes before string 2 alphabetically.\n");
	}
	else if(comparetf>0){
	printf("String 2 comes before string 1 alphabetically.\n");
	}
	else{
	printf("The two strings are the same.\n");
	}
	
strconcat(str2, str1);
printf("String 1 after concatenation: %s\n", str1);
printf("String 2 after concatenation: %s\n", str2);

strcopy(str2, str1);
printf("String 1 after copying: %s\n", str1);
printf("String 2 after copying: %s\n", str2);

return 0;
}

int strlength(char* tostr){

int length=0;

	for(int index=0; tostr[index]!='\0'; index++){
	length++;
	}

return length;
}

int strcomp(char* tostr1, char* tostr2){

char charac1, charac2;

while(*tostr1!='\0' && *tostr2!='\0'){ //A while loop is used to count through the string array pointers letter by letter, examining each.
charac1=*tostr1;
charac2=*tostr2;

	if(charac1>='a' && charac1<='z'){ //As long as the letter is lowercase, it will convert to uppercase for examining.
	charac1= charac1-'a' + 'A';
	}
	if(charac2>='a' && charac2<= 'z'){
	charac2= charac2-'a' + 'A';
	}

		if(charac1>charac2){ /*If the numerical value associated with the current character value in string1 is greater than the numerical value for the current string2 character, then it means that that string 2 comes first alphabetically.*/
		return 1;
		}
		else if(charac1<charac2){
		return -1;
		}
*tostr1++;
*tostr2++;
}
}

char* strcopy(char* tostr2, char* tostr1){

char *start=tostr2; //Makes a pointer called start that is meant to set at the first letter in the string 2.

	while( *tostr1!='\0'){ //Copies whatever is in string 1 at each element of string into string 2.
	*tostr2=*tostr1;
	tostr2++;
	tostr1++;
	}

*tostr2='\0'; //Ends the newly copied string 2 with a null terminator.

return start;
}

char* strconcat(char* tostr2, char* tostr1){

char *start=tostr2; //Makes a pointer called start that is meant to set at the first letter in string 2.

	while(*tostr2!='\0'){ //Loops through string 2 to get to the end of it.
	tostr2++;
	}
	
	while(*tostr1!='\0'){ //Sets whatever is in the empty space at the end of string 2 to the letters starting from the beginning of string 1 until string 1 ends.
	*tostr2=*tostr1;
	tostr2++;
	tostr1++;
	}
*tostr2='\0'; //Ends string 2 with a null terminator.
return start;
}



	


