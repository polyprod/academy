/********************************
* Filename: encrypted.c
* 
* author: filbri
* created: 2019-10-23
* 
* notes: this program opens and reads a file with a message. 
* it then encrypts the message and writes it to another file.
* 
* ver: 2019-10-23 first version
* ******************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>

int main()
{
    FILE *inFile; // declaration of pointer
    char message[255]; // 255 use to be default for amount of characters
    int i = 0; // for the while loop
    char c;
    int lengthArray;
    
    // open file in read mode
    inFile = fopen("textFiles/message.txt", "r");

    // test to ensure that the file opened
    if (inFile == 0)
    {
        printf("Error--file could not be opened.\n");
        exit(1);
    }
    
    // read from file 
    while (!feof(inFile)) // feof returns true when there is no more to read in file
    {
        message[i] = getc(inFile);
        i++;
    }
    printf("inFile says: %s", message);

    // store length of message in variable
    lengthArray = strlen(message) - 1;
    
    // close file
    fclose(inFile);

    // now it's time to write the encrypted version
    FILE *encryptedFile; // declaration of pointer

    // open new file in write mode
    encryptedFile = fopen("textFiles/encryptedMessage.txt", "w");

    // write encrypted message to file
    for (int i = 0; i < lengthArray; i++)           
    {
        c = message[i];
        fputc(c - 3, encryptedFile); 
    }
 
    // close file
    fclose(encryptedFile);

return 0;
}