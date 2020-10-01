#include <stdio.h>

int main(void) {

    long long int t,i,n,q,j,f,d,c,s,g;

    

    scanf("%lld",&t);

    for(i=0;i<t;i++)

   { g=0;

   long long int total=0;

       scanf("%lld%lld",&n,&q);

    for(j=1;j<=q;j++)

    {scanf("%lld%lld",&f,&d);

       c=(f-d);

      s= (f-g);

      if(s<0)

      s=-s;

      

       g=d;

    

       if(c<0)

       c=-c; 

       total=total+c+s;

       

       

    }

    printf("%lld\n",total);

   }

	return 0;}
