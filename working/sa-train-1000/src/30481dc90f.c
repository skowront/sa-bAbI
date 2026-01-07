#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_4 = 64;              // Tag.BODY
    char entity_1[24];          // Tag.BODY
    char entity_0[87];          // Tag.BODY
    entity_9 = 94;              // Tag.BODY
    entity_8 = 18;              // Tag.BODY
    entity_1[entity_4] = '7';   // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_8 < entity_9){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_0[entity_8] = 'V';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_6[1];           // Tag.BODY
    entity_3 = 12;              // Tag.BODY
    entity_6[entity_3] = 'P';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER