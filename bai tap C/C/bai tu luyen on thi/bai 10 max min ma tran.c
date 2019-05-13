#include <stdio.h>
#include <conio.h>
float a[3][4]={
        {25,0,3,5},
        {6,4,9,2},
        {9,4,-7,11}
};
int main()
{
    int i,j,cotmax[3],cotmin[3];
    float max[3],min[3];
    for (i=0;i<3;i++)
    {
        max[i]=min[i]=a[i][0];
        cotmax[i]=cotmin[i]=0;
        for(j=1;j<4;j++)
        {
            if(a[i][j]>max[i])
            {
                max[i]=a[i][j];
                cotmax[i]=j;
            }
            if(min[i]>a[i][j])
            {
                min[i]=a[i][j];
                cotmin[i]=j;
            }
        }
    }
    for(i=0;i-3;i++)
    printf("\nHang %d max a[%d,%d]=%4.0f min a[%d,%d]=%4.0f\n",i+1,i+1,cotmax[i]+1,max[i],i+1,cotmin[i]+1,min[i]);

getch();

}
