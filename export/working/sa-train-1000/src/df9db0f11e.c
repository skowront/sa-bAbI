#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_2[66];          // Tag.BODY
    entity_9 = 59;              // Tag.BODY
    entity_3 = 50;              // Tag.BODY
    while(entity_9 < entity_3){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_6[38];          // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 83;              // Tag.BODY
    entity_2[entity_9] = 'm';   // Tag.BUFWRITE_COND_SAFE
    entity_6[entity_1] = 'O';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER