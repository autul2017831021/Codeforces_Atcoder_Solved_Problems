#include<stdio.h>
#include<math.h>
main()
{
    int n,k,l,m,x,c=0;
    scanf("%d %d %d %d %d",&k,&m,&l,&x,&n);
    for(int i=1;i<=n;i++)
    {


            if(i%k==0 || i%l==0 || i%m==0 || i%x==0)
            {
                c++;
                ///printf("%d\n",i);
            }

    }
    printf("%d",c);

}
