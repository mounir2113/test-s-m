#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
هذا تطبيق يسمح لك بتحويل الأسس سعمل بلغة c
This application a base converter with c language
*/



int main()
{
    int  x , y , base   , a , c  , e , f , base_to , result;
    int power, number  , the_power , count ; // variabl of power founction 
         int    left  , result_2 , count_2 = 100 , total[count_2]; // varible base 10 to base ...

 

    printf ("entry number ");
    scanf("%d",&number);

    printf ("entry base of that number ");
    scanf("%d",&base);

    printf ("base to ");
    scanf("%d",&base_to);

    

     power=1 ;
    the_power=0;
    result= 0 ;
   
    
    if (base != base_to) 
    {
    


          if ( 11 > base && base  > 1)
          {
                    if (number != 0)
                     {            


                         

                      
                        while (number > 0 || number < 0 )  //هنا سيتم الانتقال من اي اساس الى الأساس 10 
                        {             //do till number greater than  0
                
                             int mod = (number % 10);     //split last digit from number

                             count =1 ;
                                if (count <= the_power)
                             {
                                power = base * power ; 
                             } 
                              
                             a=power*mod ;

                             
                             the_power=the_power+1 ;
                              
                               result= a + result ;
                                    
                               number = number / 10;         //divide number by 10. number /= 10 also a valid one
                           }

                           


                        if (base_to != 10 )
                        {
                            count_2 = 0;

                            while (left != 0)
                             {
           
           
                               result_2 = result % base_to  ;
                               total[count_2] = result_2 ;
                               count_2 = count_2 + 1;
                               left = result/base_to ;
            
                               result= left-(result_2/base_to) ;
                                }  

                               count_2 = count_2 - 1 ;



                                for (count_2  ; count_2 >=0 ; count_2 --)
                                 { 
                                 printf("%d" , total [count_2]);
            
                                  }


                           }
                           else 
                           {
                            printf (" result =  %d" ,result )  ;
                            }
                     }     
                 
                      else if (number == 0)
                      {
                        printf("0");
                          }  



                       
          }          

         else
          {
            printf ("entry base between 2 and 10") ;
              } 



     }

    return 0;
 
 }