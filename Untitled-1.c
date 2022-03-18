#include <stdio.h>
struct cauhoi {
	int nhom;
	char noidung[255];
	char dapan[5][255];
};
int main() {
	int i,n;
	FILE *out = fopen("cauhoi.txt", "r");
	struct cauhoi a[n];
	for(i=0;i<n;i++) {
		a[i]=fscanf(out,)
	}
	char a[n];
}
#include<stdio.h>


typedef struct datatype
{
    int chapter;
    char question[255];
    char answer[5][255];

} Type;
Type hey[100];

FILE fptr;
fptr=fopen("filepath","r");

int read(Type &cur[100])
{
    int num=0;

    while()
    {

    char t;
    t=fgetchar();
    if(t==EOF)return 0;
    if(t=='')
    {
        t=fgetchar();
        if(t==EOF)return 0;
        if(t=='')
        {
        char t1='';
        int i=0;
        int tempchap;
        fscanf(fptr,"%d",&tempchap);
        cur[num].chapter=tempchap;
        while(t1!='#')
        {
            t1=fgetchar();
            cur[num].question[i]=t1;
            i++;
        }
    }else return -1;
    }

    bool en;
    while(!en)
    {

        char buff;
        int j;
        while(buff!='#')
        {
            if(en)break;
            buff=fgetchar();
            if(buff==EOF)return 0;


            if(buff=='')
            {
            char te;
            te=fgetchar();
            if(te==EOF)
            {
                cur[num].answer[i][j]=buff;
                return 0;
            }
                if(te=='*')en=true;
                else
                {
                cur[num].answer[i][j]=buff;
                j++;
                cur[num].answer[i][j]=te;
                j++;

                }


            }
            else
        {

        cur[num].answer[i][j]=buff;
        j++;
        }

        }

        i++;
        if(i>4)en=true;


    }

num++;
}

}
