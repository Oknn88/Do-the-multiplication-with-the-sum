#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, t, s;
    printf("Ilk sayiyi giriniz :");
    scanf("%d",&a);
    printf("Ikinci sayiyi giriniz :");
    scanf("%d",&b);
    if(a>=0)
    {
        s = 1;
        t = 0;
        while(s<=a)
            {
                t = t + b;
                s = s + 1;

            }
        printf("Sonuc =%d",t);
    }
    else
        {
            s = -1;
            t = 0;
            while(s>=a)
                {
                    if(b<=0)
                        {
                             t = t - b;
                             s = s -1;
                        }
                   else
                    {
                        t = t - b;
                        s = s -1;
                    }


                }
        printf("Sonuc =%d",t);
        }
    return 0;
}
