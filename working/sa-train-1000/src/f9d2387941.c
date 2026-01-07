#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_7 = 94;              // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_3 = 35;              // Tag.BODY
    char entity_6[86];          // Tag.BODY
    char entity_1[82];          // Tag.BODY
    entity_9 = 43;              // Tag.BODY
    while(entity_9 < entity_7){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_9] = 'h';   // Tag.BUFWRITE_COND_UNSAFE
    entity_1[entity_3] = 'q';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER