#include<stdio.h>
main()
{
        int k,ctr=0;
        FILE *fp;
        fp=fopen("test.txt","w");
        for(k=65;k<=90;k++)
        {
        fprintf(fp,"%c\n",k);
        printf("%c  ",k);
        ctr++;
        }
        fclose(fp);
        printf("\nNO. OF LINES IN THIS FILE=%d",ctr);
}

