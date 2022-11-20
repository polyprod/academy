/********************************
* Filename: readDat.c
* 
* author: filbri
* created: 2019-10-24
* 
* notes: this program checks if a certain customer number exists
* in a file. it then prints the customer's bank account numbers
* and balances.
* 
* ver: 2019-10-24 first version
* ******************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>

#define ACCOUNT_FILE "datFiles/account.dat" // constant for storing file to open

int getAccount(int customerNum, int *searchedAccount, float *saldo); // function declaration

int main()
{
    int customerNum, accountNum; 
    float saldo;
    customerNum = 505; // account number to search for in file
    if (getAccount(customerNum, &accountNum, &saldo) == 0)
    {
        printf("Can't find the account!\n");
    }
    else
    {
        printf("%d\t%d\t%.2f\n", customerNum, accountNum, saldo);
    }

return 0;
}

int getAccount(int customerNum, int *searchedAccount, float *saldo) // function definition
{
    char fileName[] = ACCOUNT_FILE;
    int accNo, custNo;
    float sal;
    //open file
    FILE *inFile = fopen(fileName, "r"); // open file in read mode
    if (inFile == NULL)
    {
        return 0;
    }
    else
    {
        while (!feof(inFile)) // while the file is not empty
        {
            fscanf(inFile, "%d,%d,%f", &custNo, &accNo, &sal);
            if (customerNum == custNo)
            {
                *searchedAccount = accNo;
                *saldo = sal;
                //close file
                fclose(inFile);
                return 1;
            }
        }
    }
    //close file
    fclose(inFile);
    
return 0;
}