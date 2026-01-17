#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_5[46];          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_8 = 62;              // Tag.BODY
    entity_9 = 38;              // Tag.BODY
    entity_0 = 73;              // Tag.BODY
    char entity_6[48];          // Tag.BODY
    while(entity_0 < entity_9){ // Tag.BODY
    entity_6[entity_8] = '7';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_0] = 'V';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER