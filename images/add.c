 #include <stdio.h>
 
       int integer_add(int x, int s)
       {
               int result = x + s;
               return result;
       }
       
    int main(void)
    	{
              int y; 
              y = integer_add(3, 5);
              printf("The value of y is %d.\n", y);
   	  }
