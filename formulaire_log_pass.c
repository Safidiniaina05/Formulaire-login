#include <stdio.h>
#include <stdlib.h>

void start();
void body();
void get_form();
void css_body();
void end();

int main ()
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
}
void body()
{
    printf("<title> Formulaire d'Utilisateur</title><meta charset=""UTF-8"" />");
    css_body();
    printf("</style></head><body>");
    get_form();
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
    printf("form");
    printf("    {");
    printf("        font-style:italic;");
    printf("        border-radius:10pc 10pc ;");
    printf("        padding:5px 5px ;");
    printf("        background-color:aqua;text-decoration:none;");
    printf("        color:black;");
    printf("    }");
    printf("#a1");
    printf("    {");
    printf("        font-size: 25px;");
    printf("        color: brown;");
    printf("        background-color: white;");
    printf("        border-radius:10px 10px;");
    printf("    }");
}

void end()
{
    printf("</body></html>");
}
void get_form()
{
    printf("<form action=""log5_copy.cgi"" method=""get"">");
    printf("<p>Login : <input type=""text"" name=""log""></p>");       
    printf("<p>Passwd: <input type=""password"" name=""passwd""></p>");       
    printf("<p><span style=""margin-left:400px;""><b""><input id=""a1 type=""submit"" value=""Connect""></b></p></span>");        
    printf("</form>");        
            
}