#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    char entity_3[63];          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_5 = 78;              // Tag.BODY
    entity_9 = 85;              // Tag.BODY
    while(entity_5 < entity_9){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_3[entity_5] = 'Q';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_8[67];          // Tag.BODY
    entity_4 = 63;              // Tag.BODY
    entity_8[entity_4] = 'v';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER