#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int uzunluk, i, k, h, c, a, t;
char kelimeler[8][10] = {"masa","laptop","telefon","kitap","halat","pota","tornavida","bulut"};
int sayi;
char kelime[10];
char cevap[10];
char g;

int main()
{       
    
    srand(time(NULL));

    sayi = rand() % 8;

    strcpy(kelime,kelimeler[sayi]);

    uzunluk= strlen(kelime);

    printf("%d haneli bir kelime\n", uzunluk);

    printf("3 yanlis yapma hakkin var: \n");
    
    
    for(i=0;i<uzunluk;i++)
    {
          cevap[i]='_';
    }

    printf("%s", cevap);

    k=0;
   
    while(k<4&&c!=uzunluk)
    {
        scanf("%s", &g);
        
        for(t=0,h=0;h<uzunluk;h++)
        {
            if(g==kelime[h])
            {
                cevap[h]=g;  
                t++;
            }   
        }

        if(t==0)  k++;
        
        printf("%s   ", cevap);
    
        if(k==1) printf("  2 yanis yapma hakkin kaldi  ");
        else if(k==2) printf("  1 yanlis hakkin kaldi  ");
        else if(k==3)  printf("  yanlis hakkin kalmadi  ");

        for(c=0;'_'!=cevap[c]&&c<uzunluk;c++){}

    }
    
        if(c==uzunluk)  printf("\nkazandin kelime:%s ",cevap);

        else printf("\nkaybettin cevap:%s",kelime);
    
    
}


