#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void start();
void body(char log[50], char passwd[50]);
void end();
void openFile(char log[50], char passwd[50]);
void formulaire();
void css_body();

int main()
{
    char log[50], passwd[50];
    start();
    body(log, passwd);
    end();

    return 0;
}
void start()
{
    printf("content-type: text/html\n\n");
    printf("<hmlt><head><title> Formulaire d'Utilisateur");
}
void getData(char log[50], char passwd[50])
{
    char *chaine;
    chaine = getenv("QUERY_STRING");
    sscanf(chaine, "log=%[^&]&passwd=%s", log, passwd);
}
void body(char log[50], char passwd[50])
{
    printf("</title><meta charset=""UTF-8"" />");
    css_body();
    printf("</style></head><body>");
    getData(log, passwd);
    openFile(log, passwd);
}

void end()
{
    printf("</body></html>");
}
void openFile(char log[50], char passwd[50])
{
    FILE *file=NULL;
    char ligne[1000];
    int cont = 0;
    file = fopen("list_login.txt", "r");
    if (file == NULL)
        {
            perror("Error: ");
        }
    else
        {
            while(fgets(ligne, sizeof(ligne), file))
                {
                    if(strstr(ligne, log) && strstr(ligne, passwd))
                        {
                            cont = 1;
                            break;
                        }
                }
        }

    fclose(file);
    
    if (cont == 1)
        {
            formulaire();
        }
    else
        {
            printf("Error!!! Login or passowrd incorrecte!<br>");
            printf("<p><a href=""form5.cgi"">Se connecter à nouveau</a></p>");
        }
    
}


void formulaire()
{
    printf("<form action=""address.cgi"" method=""get"">");
    printf("<p>Entrer votre Address IP : <input type=""text"" name=""ip""></p>");
    printf("<span style=""margin-left:400px;""><input id=""a3"" type=""submit"" value=""Verify""></span>");
    printf("</form>");
}

void css_body()
{
    printf("<style>");
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
    printf("#a3");
    printf("    {");
    printf("        font-size: 25px;");
    printf("        color: brown;");
    printf("        background-color: white;");
    printf("        border-radius:10px 10px;");
    printf("    }");
    printf("a");
    printf("    {");
    printf("        font-style:italic;");
    printf("        border-radius:10pc 10pc ;");
    printf("        background-color:white;text-decoration:none;");
    printf("        color:brown;");
    printf("    }");
}