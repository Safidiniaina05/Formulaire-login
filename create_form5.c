#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void start();
void body();
void end();
void get_form();
void css_body();
    
int main()
{
    start();
    body();
    get_form();
    end();

    return 0;
}

void start()
{
    printf("content-type: text/html\n\n");
    printf("<hmlt><head><title> Creer une compte");
}
void body()
{
    printf("</title>");
    css_body();
    printf("</style><meta charset=""UTF-8"" /></head><body>");
}
void end()
{
    printf("</body></html>");
}


void get_form()
{
    printf("<form action=""create_new5.cgi"" method=""get"">");
    printf("<p>Login : <input type=""text"" name=""log""></p>");       
    printf("<p>Passwd: <input type=""password"" name=""passwd""></p>");       
    printf("<span style=""margin-left:400px;""><b><input id=""a2"" type=""submit"" value=""Creer""></b></span>");        
    printf("</form>");                 
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
    printf("#a2");
    printf("    {");
    printf("        font-size: 25px;");
    printf("        color: brown;");
    printf("        background-color: white;");
    printf("        border-radius:10px 10px;");
    printf("    }");
}


