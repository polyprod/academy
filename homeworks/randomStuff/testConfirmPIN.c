/********************************
* Filename: testConfirmPIN.c
* 
* author: filbri
* created: 2019-11-02
* 
* notes: 
* 
* ver: 2019-11-02 first version
* ******************************/

#include<stdio.h>
#include<stdlib.h>
#define MAX_AMOUNT_OF_USERS 10 

int confirmPinCode(int *pPinCode, int *pAttemptCounter);
int checkAssaultAlarm(int **pPinCode, int **pAttemptCounter, int *pArrayCounter, int codes[]);

int main()
{
    int pinCode; // to hold input PIN (should be char!)
    int attemptCounter = 0;
    do
    {
        printf("\nPlease enter your PIN code: "); // cannot begin with 0! 
                                                // (+1 calculation for assault alarm will be incorrect)
        scanf(" %d", &pinCode);
        attemptCounter++;
    } while (confirmPinCode(&pinCode, &attemptCounter) == 0); // while PIN is not found in file
    return 0;
}
// function for opening users.dat file and read PIN codes
int confirmPinCode(int *pPinCode, int *pAttemptCounter)
{
    FILE *fptr; // file pointer definition
    int ctr = 0; // counter for int array
    int codes[MAX_AMOUNT_OF_USERS]; // array to hold PIN codes from the file
    int userId, pinCode, tagId, status, reserved;
    char userName[20];
    fptr = fopen("users.dat", "r"); // open file in read mode
    if (fptr == NULL)
    {   
        printf("\nError opening the file!\n");
        
    }
    else
    {
        while (!feof(fptr)) // feof returns true when the last line been read
        {
            fscanf(fptr, "%d;%d;%[^;];%d;%d;%d", &userId, &pinCode, userName, &tagId, &status, &reserved);
            codes[ctr] = pinCode; // store read pinCode in array
            ctr++; // increase counter for array
        }
    }
    fclose(fptr); // close file
    // check if PIN code is in file and check for assault alarm
    if (checkAssaultAlarm(&pPinCode, &pAttemptCounter, &ctr, codes) == 0)
    {
        return 0; // tell validPinCode function to ask for PIN code again
    }
    else
    {
        return 1; // tell validPinCode function to quit
    }
}
// function for checking if input PIN code is in file and if an assault alarm should be sent to HC
int checkAssaultAlarm(int **pPinCode, int **pAttemptCounter, int *pArrayLength, int codes[])
{   
    int flag = 0; // turns true if input PIN code is found in file
    for (int i = 0; i < *pArrayLength; i++)
    {
        if (**pPinCode == codes[i] + 1) // check for assault alarm
        {
            printf("\nQuiet alarm sent to HC...");
            flag = 1;
            // alarmOffMenu();
            return 1; // tell validPinCode function to quit
        }
        else if (**pPinCode == codes[i]) // if pinCode is in users.dat file, call the alarmOffMenu function
        {
            printf("\nPIN %d was found in users.dat file!", **pPinCode);
            flag = 1;
            // alarmOffMenu();
            return 1; // tell validPinCode function to quit
        }
    }
    if (flag == 0 && **pAttemptCounter < 3) // if pinCode is not found, return false
    {
        printf("\nThe entered PIN code is not valid. Please try again...");
        return 0; // tell validPinCode function to ask for PIN code again
    }
    else
    {
        // if more than 3 login attempts, print "alarm sent to HC"
        printf("\nThe maximum amount of login attempts have been reached. Alarm sent to HC!"); 
        printf("\nThe program will now shut down...");
        exit(1); // exit entire program
    }
}



