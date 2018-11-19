#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void conversion (int *nNbre, char *cRomain);
void conversion2 (int *nNbre2, char *cRomain2);

int main()
{
    int nChoix=3;
    printf("Bonjour, vueillez entrer un nombre.\n");
    printf("1 = Conversion de Décimal vers Romain");
    printf("2 = Conversion de Romain vers Décimal");
    printf("0 = Quitter");
    scanf("%d", &nChoix);

    switch (nChoix)
    {
        case 1:
            int nNbre=0;
            char cRomain;

            conversion (&nNbre, &cRomain);

            printf("%c\n", cRomain);
            break;
    }
    {
        case 2:
            int nNbre2=0;
            char cRomain2;

            conversion2 (&nNbre2, &cRomain2);

            printf("%d\n", nNbre2);
            break;
    }


    return 0;
}

void conversion (int *nNbre, char *cRomain);
{
    printf("Bienvenue. Veuillez entrer un entier.\n");
    scanf("%d", &nNbre);

    if (*nNbre>=0 && *nNbre<=3999) /*Test du nombre, peut-il être traduit ?*/
    {
        printf("Il semblerait que ce nombre soit impossible à traduire.");
        printf("Recommencez avec un nombre valide !");

    if (*nNbre<=1000 && *nNbre>4000) /*Si le nombre est supérieur à mille, on rajoute un M au résultat.*/
    {
        do
        {
        *cRomain=*cRomain+'M';
        *nNbre=*nNbre-1000;
        } while (*nNbre<1000); /*On enlève autant de mille qu'il faut, jusqu'à arriver aux centaines. Et on ajoute un M à chaque mille retiré.*/
    }

        if (*nNbre<=900 && *nNbre>=999)/*Ici, pas le choix, on met un chiffre particulier (vaut pour tous les 9.. et 4..)*/
        {
            *cRomain=*cRomain+'CM';
            *nNbre=*nNbre-900;
        }
        else if (*nNbre<=500 && *nNbre>=899)/*Si le nombre vaut entre 500 et 800, on met un D au résultat*/
        {
            *cRomain=*cRomain+'D';
            *nNbre=*nNbre-500;
            while (*nNbre<100)
            {
                *cRomain=*cRomain+'C'; /*Tant qu'no arrive pas aux dizaines, on enlève 10 au nombre,et on rajoute un C au résultat*/
                *nNbre=*nNbre-100;
            }
        }
        else if (*nNbre<=400 && *nNbre>=499)
        {
            *cRomain=*cRomain+'CD';
            *nNbre=*nNbre-400;
        }
        else (*nNbre<100 && *nNbre>=399)/*On fait la même chose que pour les 500*/
        {
            do
            {
            *cRomain=*cRomain+'C';
            *nNbre=*nNbre-100;
            } while (*nNbre>100);
        }

            if (*nNbre<=90 && *nNbre>=99)
            {
                *cRomain=*cRomain+'XC';
                *nNbre=*nNbre-90;
            }
            else if (*nNbre<=50 && *nNbre>=89)
            {
                *cRomain=*cRomain+'L';
                *nNbre=*nNbre-50;
                while (*nNbre<10)
                {
                    *cRomain=*cRomain+'X';
                    *nNbre=*nNbre-10;
                }
            }
            else if (*nNbre<=40 && *nNbre>=49)
            {
                *cRomain=*cRomain+'XL';
                *nNbre=*nNbre-40;
            }
            else (*nNbre<10 && *nNbre>=39)
            {
                do
                {
                *cRomain=*cRomain+'X';
                *nNbre=*nNbre-10;
                } while (*nNbre>10);
            }

                if (*nNbre<=9 && *nNbre>=9)
                {
                    *cRomain=*cRomain+'IX';
                }
                else if (*nNbre<=5 && *nNbre>=8)
                {
                    *cRomain=*cRomain+'V';
                    *nNbre=*nNbre-5;
                    while (*nNbre<1)
                    {
                        *cRomain=*cRomain+'I';
                        *nNbre=*nNbre-1;
                    }
                }
                else if (*nNbre=4)
                {
                    *cRomain=*cRomain+'IV';
                }
                else (*nNbre<1 && *nNbre>=3)
                {
                    do
                    {
                    *cRomain=*cRomain+'I';
                    *nNbre=*nNbre-1;
                    } while (*nNbre=0);
                }
    }
    if (*nNbre<=900 && *nNbre>=999) /*Répétition des instructions en fonction du nombre entré*/
        {
            *cRomain=*cRomain+'CM';
            *nNbre=*nNbre-900;

        else if (*nNbre<=500 && *nNbre>=899)
        {
            *cRomain=*cRomain+'D';
            *nNbre=*nNbre-500;
            while (*nNbre<100)
            {
                *cRomain=*cRomain+'C';
                *nNbre=*nNbre-100;
            }
        }
        else if (*nNbre<=400 && *nNbre>=499)
        {
            *cRomain=*cRomain+'CD';
            *nNbre=*nNbre-400;
        }
        else (*nNbre<100 && *nNbre>=399)
        {
            do
            {
            *cRomain=*cRomain+'C';
            *nNbre=*nNbre-100;
            } while (*nNbre>100);
        }

            if (*nNbre<=90 && *nNbre>=99)
            {
                *cRomain=*cRomain+'XC';
                *nNbre=*nNbre-90;
            }
            else if (*nNbre<=50 && *nNbre>=89)
            {
                *cRomain=*cRomain+'L';
                *nNbre=*nNbre-50;
                while (*nNbre<10)
                {
                    *cRomain=*cRomain+'X';
                    *nNbre=*nNbre-10;
                }
            }
            else if (*nNbre<=40 && *nNbre>=49)
            {
                *cRomain=*cRomain+'XL';
                *nNbre=*nNbre-40;
            }
            else (*nNbre<10 && *nNbre>=39)
            {
                do
                {
                *cRomain=*cRomain+'X';
                *nNbre=*nNbre-10;
                } while (*nNbre>10);
            }

                if (*nNbre<=9 && *nNbre>=9)
                {
                    *cRomain=*cRomain+'IX';
                }
                else if (*nNbre<=5 && *nNbre>=8)
                {
                    *cRomain=*cRomain+'V';
                    *nNbre=*nNbre-5;
                    while (*nNbre<1)
                    {
                        *cRomain=*cRomain+'I';
                        *nNbre=*nNbre-1;
                    }
                }
                else if (*nNbre=4)
                {
                    *cRomain=*cRomain+'IV';
                }
                else (*nNbre<1 && *nNbre>=3)
                {
                    do
                    {
                    *cRomain=*cRomain+'I';
                    *nNbre=*nNbre-1;
                    } while (*nNbre=0);
                }
            }

            if (*nNbre<=90 && *nNbre>=99)
            {
                *cRomain=*cRomain+'XC';
                *nNbre=*nNbre-90;
            else if (*nNbre<=50 && *nNbre>=89)
            {
                *cRomain=*cRomain+'L';
                *nNbre=*nNbre-50;
                while (*nNbre<10)
                {
                    *cRomain=*cRomain+'X';
                    *nNbre=*nNbre-10;
                }
            }
            else if (*nNbre<=40 && *nNbre>=49)
            {
                *cRomain=*cRomain+'XL';
                *nNbre=*nNbre-40;
            }
            else (*nNbre<10 && *nNbre>=39)
            {
                do
                {
                *cRomain=*cRomain+'X';
                *nNbre=*nNbre-10;
                } while (*nNbre>10);
            }

                if (*nNbre<=9 && *nNbre>=9)
                {
                    *cRomain=*cRomain+'IX';
                }
                else if (*nNbre<=5 && *nNbre>=8)
                {
                    *cRomain=*cRomain+'V';
                    *nNbre=*nNbre-5;
                    while (*nNbre<1)
                    {
                        *cRomain=*cRomain+'I';
                        *nNbre=*nNbre-1;
                    }
                }
                else if (*nNbre=4)
                {
                    *cRomain=*cRomain+'IV';
                }
                else (*nNbre<1 && *nNbre>=3)
                {
                    do
                    {
                    *cRomain=*cRomain+'I';
                    *nNbre=*nNbre-1;
                    } while (*nNbre=0);
                }
                }

                if (*nNbre<=9 && *nNbre>=9)
                {
                    *cRomain=*cRomain+'IX';

                else if (*nNbre<=5 && *nNbre>=8)
                {
                    *cRomain=*cRomain+'V';
                    *nNbre=*nNbre-5;
                    while (*nNbre<1)
                    {
                        *cRomain=*cRomain+'I';
                        *nNbre=*nNbre-1;
                    }
                }
                else if (*nNbre=4)
                {
                    *cRomain=*cRomain+'IV';
                }
                else (*nNbre<1 && *nNbre>=3)
                {
                    do
                    {
                    *cRomain=*cRomain+'I';
                    *nNbre=*nNbre-1;
                    } while (*nNbre=0);
                }
                }
}
void conversion2 (int *nNbre2, char *cRomain2);
{
    int lgChaine=0;
    printf("Bienvenue. Veuillez entrer un chiffre romain.\n");
    scanf("%d", &cRomain2);

    lgChaine=strlen(*cRomain2);

    if ((lgChaine-lgChaine+1)='M')
    {
        *nNbre=*nNbre+1000;
        lgChaine=lgChaine-1;
        while (lgChaine-lgChaine+1)='M'
        {
            *nNbre=*nNbre+1000;
            lgChaine=lgChaine-1;
        }

        if ((lgChaine-lgChaine+1)='C' &&(lgChaine-lgChaine+2)='M')
        {
            *nNbre=*nNbre+900;
            lgChaine=lgChaine-1;
        }
        else if ((lgChaine-lgChaine+1)='D')
        {
            *nNbre=*nNbre+500;
            lgChaine=lgChaine-1;
            while (lgChaine-lgChaine+1)='C'
            {
                *nNbre=*nNbre+100;
                lgChaine=lgChaine-1;
            }
        }
        else if ((lgChaine-lgChaine+1)='C' &&(lgChaine-lgChaine+2)='D')
        {
            *nNbre=*nNbre+400;
            lgChaine=lgChaine-1;
        }
        else ((lgChaine-lgChaine+1)='C')
        {
            *nNbre=*nNbre+100;
            lgChaine=lgChaine-1;
            while (lgChaine-lgChaine+1)='C'
            {
                *nNbre=*nNbre+100;
                lgChaine=lgChaine-1;
            }
        }

            if ((lgChaine-lgChaine+1)='X' &&(lgChaine-lgChaine+2)='C')
            {
                *nNbre=*nNbre+90;
                lgChaine=lgChaine-1;
            }
            else if ((lgChaine-lgChaine+1)='L')
            {
                *nNbre=*nNbre+50;
                lgChaine=lgChaine-1;
                while (lgChaine-lgChaine+1)='X'
                {
                    *nNbre=*nNbre+10;
                    lgChaine=lgChaine-1;
                }
            }
            else if ((lgChaine-lgChaine+1)='X' &&(lgChaine-lgChaine+2)='L')
            {
                *nNbre=*nNbre+40;
                lgChaine=lgChaine-1;
            }
            else ((lgChaine-lgChaine+1)='X')
            {
                *nNbre=*nNbre+10;
                lgChaine=lgChaine-1;
                while (lgChaine-lgChaine+1)='X'
                {
                    *nNbre=*nNbre+10;
                    lgChaine=lgChaine-1;
                }
            }

                if ((lgChaine-lgChaine+1)='I' &&(lgChaine-lgChaine+2)='X')
                {
                    *nNbre=*nNbre+9;
                }
                else if ((lgChaine-lgChaine+1)='V')
                {
                    *nNbre=*nNbre+5;
                    lgChaine=lgChaine-1;
                    while (lgChaine-lgChaine+1)='I'
                    {
                        *nNbre=*nNbre+1;
                        lgChaine=lgChaine-1;
                    }
                }
                else if ((lgChaine-lgChaine+1)='I' &&(lgChaine-lgChaine+2)='V')
                {
                    *nNbre=*nNbre+4;
                }
                else ((lgChaine-lgChaine+1)='I')
                {
                    *nNbre=*nNbre+1;
                    lgChaine=lgChaine-1;
                    while (lgChaine-lgChaine+1)='I'
                    {
                        *nNbre=*nNbre+1;
                        lgChaine=lgChaine-1;
                    }
                }

    }


    if ((lgChaine-lgChaine+1)='C' &&(lgChaine-lgChaine+2)='M')
    {
        *nNbre=*nNbre+900;
        lgChaine=lgChaine-1;
    else if ((lgChaine-lgChaine+1)='D')
    {
        *nNbre=*nNbre+500;
        lgChaine=lgChaine-1;
        while (lgChaine-lgChaine+1)='C'
        {
            *nNbre=*nNbre+100;
            lgChaine=lgChaine-1;
        }
    }
    else if ((lgChaine-lgChaine+1)='C' &&(lgChaine-lgChaine+2)='D')
    {
        *nNbre=*nNbre+400;
        lgChaine=lgChaine-1;
    }
    else ((lgChaine-lgChaine+1)='C')
    {
        *nNbre=*nNbre+100;
        lgChaine=lgChaine-1;
        while (lgChaine-lgChaine+1)='C'
        {
            *nNbre=*nNbre+100;
            lgChaine=lgChaine-1;
        }
    }

        if ((lgChaine-lgChaine+1)='X' &&(lgChaine-lgChaine+2)='C')
        {
            *nNbre=*nNbre+90;
            lgChaine=lgChaine-1;
        }
        else if ((lgChaine-lgChaine+1)='L')
        {
            *nNbre=*nNbre+50;
            lgChaine=lgChaine-1;
            while (lgChaine-lgChaine+1)='X'
            {
                *nNbre=*nNbre+10;
                lgChaine=lgChaine-1;
            }
        }
        else if ((lgChaine-lgChaine+1)='X' &&(lgChaine-lgChaine+2)='L')
        {
            *nNbre=*nNbre+40;
            lgChaine=lgChaine-1;
        }
        else ((lgChaine-lgChaine+1)='X')
        {
            *nNbre=*nNbre+10;
            lgChaine=lgChaine-1;
            while (lgChaine-lgChaine+1)='X'
            {
                *nNbre=*nNbre+10;
                lgChaine=lgChaine-1;
            }
        }

            if ((lgChaine-lgChaine+1)='I' &&(lgChaine-lgChaine+2)='X')
            {
                *nNbre=*nNbre+9;
            }
            else if ((lgChaine-lgChaine+1)='V')
            {
                *nNbre=*nNbre+5;
                lgChaine=lgChaine-1;
                while (lgChaine-lgChaine+1)='I'
                {
                    *nNbre=*nNbre+1;
                    lgChaine=lgChaine-1;
                }
            }
            else if ((lgChaine-lgChaine+1)='I' &&(lgChaine-lgChaine+2)='V')
            {
                *nNbre=*nNbre+4;
            }
            else ((lgChaine-lgChaine+1)='I')
            {
                *nNbre=*nNbre+1;
                lgChaine=lgChaine-1;
                while (lgChaine-lgChaine+1)='I'
                {
                    *nNbre=*nNbre+1;
                    lgChaine=lgChaine-1;
                }
            }
        }


        if ((lgChaine-lgChaine+1)='X' &&(lgChaine-lgChaine+2)='C')
            {
                *nNbre=*nNbre+90;
                lgChaine=lgChaine-1;
        else if ((lgChaine-lgChaine+1)='L')
        {
            *nNbre=*nNbre+50;
            lgChaine=lgChaine-1;
            while (lgChaine-lgChaine+1)='X'
            {
                *nNbre=*nNbre+10;
                lgChaine=lgChaine-1;
            }
        }
        else if ((lgChaine-lgChaine+1)='X' &&(lgChaine-lgChaine+2)='L')
        {
            *nNbre=*nNbre+40;
            lgChaine=lgChaine-1;
        }
        else ((lgChaine-lgChaine+1)='X')
        {
            *nNbre=*nNbre+10;
            lgChaine=lgChaine-1;
            while (lgChaine-lgChaine+1)='X'
            {
                *nNbre=*nNbre+10;
                lgChaine=lgChaine-1;
            }
        }

            if ((lgChaine-lgChaine+1)='I' &&(lgChaine-lgChaine+2)='X')
            {
                *nNbre=*nNbre+9;
            }
            else if ((lgChaine-lgChaine+1)='V')
            {
                *nNbre=*nNbre+5;
                lgChaine=lgChaine-1;
                while (lgChaine-lgChaine+1)='I'
                {
                    *nNbre=*nNbre+1;
                    lgChaine=lgChaine-1;
                }
            }
            else if ((lgChaine-lgChaine+1)='I' &&(lgChaine-lgChaine+2)='V')
            {
                *nNbre=*nNbre+4;
            }
            else ((lgChaine-lgChaine+1)='I')
            {
                *nNbre=*nNbre+1;
                lgChaine=lgChaine-1;
                while (lgChaine-lgChaine+1)='I'
                {
                    *nNbre=*nNbre+1;
                    lgChaine=lgChaine-1;
                }
            }
        }

        if ((lgChaine-lgChaine+1)='I' &&(lgChaine-lgChaine+2)='X')
            {
                *nNbre=*nNbre+9;
            else if ((lgChaine-lgChaine+1)='V')
            {
                *nNbre=*nNbre+5;
                lgChaine=lgChaine-1;
                while (lgChaine-lgChaine+1)='I'
                {
                    *nNbre=*nNbre+1;
                    lgChaine=lgChaine-1;
                }
            }
            else if ((lgChaine-lgChaine+1)='I' &&(lgChaine-lgChaine+2)='V')
            {
                *nNbre=*nNbre+4;
            }
            else ((lgChaine-lgChaine+1)='I')
            {
                *nNbre=*nNbre+1;
                lgChaine=lgChaine-1;
                while (lgChaine-lgChaine+1)='I'
                {
                    *nNbre=*nNbre+1;
                    lgChaine=lgChaine-1;
                }
            }
            }
}

