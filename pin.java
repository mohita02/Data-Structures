import java.util.*;
import java.io.*;
class pin{
    public static void main(String a[])
    {
        Scanner sc=new Scanner(System.in);
        int input1,input2,input3;
        System.out.println("enter the numbers in 3 inputs");
        input1=sc.nextInt();
        input2=sc.nextInt();
        input3=sc.nextInt();
        int pin;
        int o1=0,o2=0,o3=0;
        int p1=0;
      
            o1=input1%10;
            o2=input2%10;
            o3=input3%10;
            if(o1<o2 && o1<o3)
            {
                p1=o1;
            }
            else if(o2<o1 && o2<o3)
            {
                p1=o2;
            }
            else{
                p1=o3;
            }
           int h1=0,h2=0,h3=0;
            h1=input1/100;
            h2=input2/100;
            h3=input3/100;
            int ph=0;
           if(h1<h2 && h1<h3)
           {
               ph=h1;
           }
           else if(h2<h3 && h2<h1)
           {
               ph=h2;
           }
           else{
               ph=h3;
           }
          int t1=0,t2=0,t3=0;
          t1=(input1/10)%10;
          System.out.println(t1);
          t2=(input2/10)%10;
          System.out.println(t2);
          t3=(input3/10)%10;
          System.out.println(t3);
          int pt;
          if(t1<t2 && t1<t3)
          {
              pt=t1;
              System.out.println(pt);
          }
          else if(t2<t1 && t2<t3)
          {
              pt=t2;
              System.out.println(pt);
          }
          else{
             pt=t3;
             System.out.println(pt);
          }
        

          int rem1,rem2,rem3;
         rem1=input1%10;
         rem2=(input1/10)%10;
         rem3=input1/100;
         int great_input1;
         if(rem1>rem2 && rem1>rem3)
         {
             great_input1=rem1;
         }
         else if(rem2>rem1 && rem2>rem3)
         {
             great_input1=rem2;
         }
         else{
             great_input1=rem3;
         }
         int r1,r2,r3;
         r1=input2%10;
         r2=(input2/10)%10;
         r3=input2/100;
         int great_input2;
         if(r1>r2 && r1>r3)
         {
             great_input2=r1;
         }
         else if(r2>r1 && r2>r3)
         {
             great_input2=r2;
         }
         else{
             great_input2=r3;
         }
         int rm1,rm2,rm3;
         rm1=input3%10;
         rm2=(input3/10)%10;
         rm3=input3/100;
         int great_input3;
         int great;
         if(rm1>rm2 && rm1>rm3)
         {
            great_input3=rm1;
         }
         else if(rm2>rm1 && rm2>rm3)
         {
             great_input3=rm2;
         }
         else{
             great_input3=rm3;
         }
         if(great_input1>great_input2 && great_input1>great_input3)
         {
             great=great_input1;
         }
         else if(great_input2>great_input1 && great_input2>great_input3)
         {
             great=great_input2;
         }
         else{
             great=great_input3;
         }
         System.out.print(great+""+ph+""+pt+""+p1);
    }
}