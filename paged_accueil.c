#include <stdio.h>

void start();
void body();
void end();
void acceuil();
void css_body();

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
    printf("<hmlt><head>");
    css_body();
    printf("<title> Formulaire d'Utilisateur");
}
void body()
{
    printf("</title></style><meta charset=""UTF-8"" /></head><center>");
    acceuil();
}        
void end()
{
    printf("</center></html>");
}
void acceuil()
{
    printf("<p><a href=""form5.cgi"">Se connecter</a></p>");
    printf("<p><a href=""create5.cgi""> Create new account</a></p>");
}
void css_body()
{
    printf("<style>");
    printf("body");
    printf("    {");
    printf("        text-align: center;position:relative;top:200px;");
    printf("        font-size: 30px;");
    printf("        background-color:blueviolet;");
    printf("    }");
    printf("a");
    printf("    {");
    printf("        font-style:italic;");
    printf("        border-radius:10pc 10pc ;");
    printf("        background-color:white;text-decoration:none;");
    printf("        color:brown;");
    printf("    }");
}