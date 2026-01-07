#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_2 = 1;               // Tag.BODY
    char entity_6[8];           // Tag.BODY
    entity_9 = 7;               // Tag.BODY
    while(entity_9 < entity_2){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 34;              // Tag.BODY
    char entity_4[25];          // Tag.BODY
    entity_6[entity_9] = '2';   // Tag.BUFWRITE_COND_SAFE
    entity_4[entity_0] = 'i';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER