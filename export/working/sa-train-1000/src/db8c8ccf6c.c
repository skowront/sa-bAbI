#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_7;               // Tag.BODY
    char entity_9[37];          // Tag.BODY
    char entity_1[64];          // Tag.BODY
    entity_7 = 14;              // Tag.BODY
    entity_5 = 68;              // Tag.BODY
    entity_3 = 21;              // Tag.BODY
    while(entity_7 < entity_3){ // Tag.BODY
    entity_1[entity_5] = 'R';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_7] = 'J';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER