   #include<stdio.h>

     int main()
     {
       FILE *fp;
       int ch;
       char txt[300];
       int len=0;
       fp=fopen("tenlines.txt","r");

       do{
           ch=fgetc(fp);
           txt[len]=ch;
           len++;
         } while(ch!=EOF && ch!='\n');
     fclose(fp);
     puts(txt);

     return 0;
    }
