#include <string.h>
#include <stdlib.h>
#include <stdio.h>


char * intToRoman(int num){
    char *str=malloc(30*sizeof(char));
    strcpy(str, "");//makes it so we can concat string values
    while(num > 0){ //use a while loop to subtract from the value continuously
        //create a line of if statements, starting from largest roman numeral to smallest
        //subtract each value from num
        printf("Working\n");
        if(num >= 1000){
            strcat(str, "M");
            num-=1000;
        }
        else if(num >=900){
            strcat(str, "CM");
            num-=900;
        }
        else if(num >= 500){
            strcat(str, "D");
            num-=500;
        }
        else if(num >=400){
            strcat(str, "CD");
            num-=400;
        }
        else if(num >=100){
            strcat(str, "C");
            num-=100;
        }
        else if(num >= 90){
            strcat(str, "XC");
            num-=90;
        }
        else if(num >=50){
            strcat(str, "L");
            num-=50;
        }
        else if(num >=40){
            strcat(str, "XL");
            num-=40;
        }
        else if(num >=10){
            strcat(str, "X");
            num-=10;
        }
        else if(num==9){
            strcat(str, "IX");
            num-=9;
        }
        else if(num>=5){
            strcat(str, "V");
            num-=5;
        }
        else if(num==4){
            strcat(str, "IV");
            num-=4;
        }
        else if(num>=1 && num <4){
            printf("Does it\n");
            strcat(str, "I");
            num-=1;
        }
    }
    //1387: MCCCXXXXXXXXVII
    //printf("Roman Numerals: %s", str);
    return str;
}
int main(int argc, char * argv[]){
	int number=0; //unchanged value will be changed after.
	if(argc > 1){
		//argv[0] is the program name
		number=argv[1]; //this gets the arguments passed after the program name
		printf("The value is: %d", number);
	}
	char[] s=intToRoman(number);
	free(s); //prevent memory leak
	return 0;
}