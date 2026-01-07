#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_3 = 7;               // Tag.BODY
    entity_6 = 95;              // Tag.BODY
    char entity_8[64];          // Tag.BODY
    while(entity_6 < entity_3){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_9[84];          // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_8[entity_6] = '0';   // Tag.BUFWRITE_COND_UNSAFE
    entity_4 = 21;              // Tag.BODY
    entity_9[entity_4] = '0';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER