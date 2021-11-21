#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//prototype
bool check_valid_key(string s);

int main(int argc, string argv[])
{
    if (argc != 2 || !check_valid(argv[1]))
    {
        printf("Usage: ./ceasar key");
        return 1;
    }
    //insert key 
    int key = atoi(argv[1]);
    
    //get user to type in plaintext
    string plaintext = get_string("Plaintext: ");
    printf("Cipertext: ");
    
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        char c = plaintext[i];
        if (isalpha(c)) && isupper(c)
        {
            char i = 'A';
            if (islower(c))
            char i = 'a';
            printf("%c", (c - i + key) % 26 + i);
        }
            
            
    }
}
  
bool check_valid_key(string s)
  {
      for (int i = 0, n = strlen (string[s]); i < n; i++)
      if (string[s][i] = isdigit)
      return true;
      else
      return false;
  }
