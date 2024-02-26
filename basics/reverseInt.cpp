class Solution
{
public:
    int reverse(int x)
   {
 long rs = 0;
   if(x>=2147483647||x <= -2147483648)
   {
      rs = 0;
   }
   else if(x>0)
   {
        while(x>0)
       { int w = x%10;
           x =x/10;
           rs = rs*10 + w;
          
       }

   }
     else if(x<0)
    {    x = x* -1;
        while(x>0)
       {
           int w = x%10;
           x =x/10;
           rs = rs*10 + w;
          

       }
     
     
      rs = rs*-1;
   }
   if(rs>=2147483647||rs<= -2147483648)
   {
      rs = 0;
   }

   return rs;
   }
};
