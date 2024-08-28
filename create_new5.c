#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void start();
void body(char log[50], char passwd[50]);
void end();
void getData(char log[50], char passwd[50]);
void principal();
void css_body();
    
int main()
{
    char log[50], passwd[50];
    getData(log, passwd);
    start();
    body(log, passwd);
    end();

    return 0;
}

void start()
{
    printf("content-type: text/html\n\n");
    printf("<hmlt><head><meta charset=""UTF-8"" /><title> Creer une compte");
}

void body(char log[50], char passwd[50])
{
    printf("</title><style>");
    css_body();
    printf("</style></head><body>");
    printf("<p>L'Utilisateur a été créer avec succès</p>");
    principal();
}
void end()
{
    printf("</body></html>");
}

void getData(char log[50], char passwd[50])
{
    FILE *file=NULL;
    char ligne[1000];
    char *chaine;
    chaine = getenv("QUERY_STRING");
    sscanf(chaine, "log=%[^&]&passwd=%s", log, passwd);
    file = fopen("list_login.txt", "a+");
    if (file == NULL )
        {
            perror("Error: ");
        }
    else
        {
            fprintf(file, "\n%s&%s", log, passwd);
        }
}

void principal()
{
    printf("<p><a href=""form5.cgi"">Se connecter à nouveau</a></p>");
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
    printf("a");
    printf("    {");
    printf("        font-style:italic;");
    printf("        border-radius:10pc 10pc ;");
    printf("        background-color:white;text-decoration:none;");
    printf("        color:brown;");
    printf("    }");
}