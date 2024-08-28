#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void start();
void body();
void end();
void principal();
void css_body();
void formulaire5();
void condition(char chaine[100], int a, int b, int c, int d);

int main()
{
    start();
    body();
    end();

    return 0;
}

void start()
{
    printf("content-type: text/html\n\n");
    printf("<hmlt><head><meta charset=""UTF-8"" /><title> Address IP");
}
void body()
{
    int a, b, c,  d;
    char chaine[100];
    printf("</title><style>");
    css_body();
    printf("</style></head><body>");
    condition(chaine , a, b, c, d);
    principal();
}
void end()
{
    printf("</body></html>");
}

void condition(char chaine[100], int a, int b, int c, int d)
{
    
        int x=128, y=192, z=224, w=240, e=255;
        char *get;
    get = getenv("QUERY_STRING");
    if(sscanf(get, "ip=%d.%d.%d.%d", &a, &b, &c, &d)==4)
{
    printf("%d.%d.%d.%d\n", a, b, c, d);
    if (a<x && b<e && c<e && d<e)
        {
            printf("<br>L'address IP est au Classe de A\n");
        }
    else if(a>=x && a<y && b<e && c<e && d<e)
        {
            printf("<br>L'address IP est au Classe de B\n");
        }
    else if(a>=y && a<z && b<e && c<e && d<e)
        {
            printf("<br>L'address IP est au Classe de C\n");
        }
    else if(a>=z && a<w && b<e && c<e && d<e)
        {
            printf("<br>L'address IP est au Classe de D\n");
        }
    else if(a>=w && a<e && b<e && c<e && d<e)
        {
            printf("<b>rL'address IP est au Classe de E\n");
        }
    else if (a>e || b>e || c>e || d>e)
        {
            printf("<br>ERREUR!!! Address IP est invalide");
        }
}
    else
        {
            printf("Erreur !!! Address IP invalide<br>");
            printf("Ressayer s'il vous plait!<br><br>");
            formulaire5();
        }
}

void formulaire5()
{
    printf("<form action=""address.cgi"" method=""get"">");
    printf("<p>Entrer votre Address IP : <input type=""text"" name=""ip""></p>");
    printf("<span style=""margin-left:400px;""><input id=""a4"" type=""submit"" value=""Verify""></span>");
    printf("</form>");
}
void principal()
{
    printf("<br><p><a href=""form5.cgi"">Se connecter à nouveau</a></p>");
}
void css_body()
{
    printf("body");
    printf("    {");
    printf("        text-align: center;position:relative;top:200px;");
    printf("        font-size: 30px;");
    printf("        background-color:skyblue;");
    printf("        color:fuchsia;");
    printf("    }");
    printf("form");
    printf("    {");
    printf("        font-style:italic;");
    printf("        border-radius:10pc 10pc ;");
    printf("        padding:5px 5px ;");
    printf("        background-color:aqua;text-decoration:none;");
    printf("        color:black;");
    printf("    }");
    printf("a");
    printf("    {");
    printf("        font-style:italic;");
    printf("        border-radius:10pc 10pc ;");
    printf("        background-color:white;text-decoration:none;");
    printf("        color:brown;");
    printf("    }");
    printf("#a4");
    printf("    {");
    printf("        font-size: 25px;");
    printf("        color: brown;");
    printf("        background-color: white;");
    printf("        border-radius:10px 10px;");
    printf("    }");
}