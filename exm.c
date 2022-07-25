#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch,sent;
    int i=0,length=0;

    printf("\n Please Enter any String :  ");
    gets(str);

    printf("\n Please Enter the Character that you want to Search for :  ");
    scanf("%c", &ch);

    while(1)
    {


        if(str[i]=='\0')
        {
            break;
        }
        else
        {
            i++;
            length++;
        }
    }

    for(i = 0; i <= length; i++)
    {
        if(str[i] == ch)
        {
            printf("\n '%c' is Found at Position %d ", ch, i+1 );
        }


    }


    printf("\n Please Enter the word that you want to Search for :  ");
    scanf("%s", &sent);

int coun=0;

    for(i = 0; i <= length; i++)
    {
        if(str[i] == 'i'){

            if(str[i+1]=='s'){

                coun++;
            }
        }
        {

        }
    }
printf(" Found at Position %d ", coun);


    return 0;
}
