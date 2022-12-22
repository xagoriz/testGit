#include <stdio.h>

int main(void)
{
    FILE *fp;                      // Variable to represent open file

    fp = fopen("test.txt", "r");  // Open file for reading

    int c = fgetc(fp);             // Read a single character
    printf("%c\n", c);             // Print char to stdout

    while ((c = fgetc(fp)) != EOF)
        printf("%c", c);
    
    char s[1024];  // Big enough for any line this program will encounter
    int linecount = 0;


    while (fgets(s, sizeof s, fp) != NULL) 
        printf("%d: %s", ++linecount, s);

    fclose(fp);                    // Close the file when done
}