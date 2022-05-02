public class ConversionIntToRoman{
  /*Symbol    Value
I          1
IV         4
V          5
IX         9
X          10
XL         40
L          50
XC         90
C          100
CD         400
D          500
CM         900
M          1,000
  
  */

    public String solution(int n) {
      String str="";
      System.out.println("The number we are converting is: " +n);
      while (n > 0){//ensures we don't get any false nums
        if(n >= 1000){
          str+="M";
          n-=1000;
        }
        else if(n >= 900){
          str+="CM";
          n-=900;
        }
        else if(n >=500){
          str+="D";
          n-=500;
        }
        else if(n >=400){
          str+="CD";
          n-=400;
        }
        else if(n >= 100){
          str+="C";
          n-=100;
        }
        else if(n >=90){
          str+="XC";
          n-=90;
        }
        else if(n >= 50){
          str+="L";
          n-=50;
        }
        else if(n >= 40){
          str+="XL";
          n-=40;
        }
        else if(n >=10){
          str+="X";
          n-=10;
        }
        else if(n==9){
          str+="IX";
          n-=9;
        }
        else if(n>=5){
          str+="V";
          n-=5;
        }
        else if(n==4){
          str+="IV";
          n-=4;
        }
        else if(n>= 1 && n < 4){
          str+="I";
          n-=1;
        }
      }
      System.out.println("The number in Roman Numerals is: " +str);
      return str;
    }
}