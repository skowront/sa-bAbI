#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_7[3];           // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = 16;              // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 84;              // Tag.BODY
    char entity_8[25];          // Tag.BODY
    char entity_3[98];          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = 61;              // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 44;              // Tag.BODY
    while(entity_2 < entity_9){ // Tag.BODY
    entity_8[entity_6] = '9';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_0] = '4';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3[entity_2] = 'U';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER