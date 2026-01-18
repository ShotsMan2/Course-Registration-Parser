#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kayit[99];
    int i=0,len=0,sum=0,currentlen=0,maxlen=0,maxstartindex=0,currentstartindex=0;

    printf("kayit giriniz ");
    scanf("%s",kayit);

    while(kayit[i]!='\0'){
        i++;
        len++;
    }

    for(i=0;i<=len;i++){
        if(kayit[i]=='\0' || kayit[i]=='#'){
            sum++;

            if(currentlen>maxlen){
                maxlen=currentlen;
                maxstartindex=currentstartindex;
            }

            currentlen=0;
            currentstartindex=i+1;
        }
        else{
            currentlen++;
        }
    }

    printf("\n Total course count: %d\n",sum);

    for(i=0;i<maxlen;i++){
        printf("%c",kayit[i+maxstartindex]);
    }

    printf("\n maxlen: %d\n",maxlen);

    for(i=0;i<len;i++){
        if(kayit[i]=='#'){
            printf("\n");
        }
        else{
            printf("%c",kayit[i]);
        }
    }



    return 0;
}
