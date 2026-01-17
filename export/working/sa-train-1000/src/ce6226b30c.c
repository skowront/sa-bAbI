#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_1[53];          // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 72;              // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_9 = 80;              // Tag.BODY
    char entity_0[9];           // Tag.BODY
    entity_3 = 73;              // Tag.BODY
    while(entity_9 < entity_8){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_3] = 'O';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0[entity_9] = 'q';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER