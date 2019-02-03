//Eyup KORURER 29.09.2017
//GNU GCC compiler ile derlenmiþtir.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Matrisin boyutunu giriniz:");
    scanf("%d",&n);
    double matris [n][n];
    double gecici_satir[n];
    int i,j,k;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d. satir %d. sutun'u giriniz:",(i+1),(j+1));
            scanf("%lf",&matris[i][j]);
        }
    }
    for(i=0; i<n-1; i++)
    {

        if(matris[i][i]==0)
        {
            for(j=i+1; j<n; j++)
            {

                if(matris[j][i]!=0)
                {
                    for(k=0; k<n; k++)
                    {

                        gecici_satir[k]=matris[i][k];
                    }

                    for(k=0; k<n; k++)
                    {

                        matris[i][k]=matris[j][k];
                    }
                    for(k=0; k<n; k++)
                    {
                        matris[j][k]=gecici_satir[k];
                    }
                    break;
                }
            }
        }

        if(matris[i][i]!=0)
        {
            for(j=i+1; j<n; j++)
            {

                if(matris[j][i]!=0)
                {
                    double sabit=-1*matris[j][i]/matris[i][i];
                    for(k=i; k<n; k++)
                    {

                        matris[j][k]=matris[j][k]+matris[i][k]*sabit;

                    }
                }

            }

        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            printf("%-8.8lf ",matris[i][j]);
        printf("\n");
    }

    return 0;
}
