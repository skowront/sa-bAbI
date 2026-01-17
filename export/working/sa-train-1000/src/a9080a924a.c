#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_7 = 47;              // Tag.BODY
    char entity_3[28];          // Tag.BODY
    char entity_2[65];          // Tag.BODY
    entity_9 = 30;              // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 44;              // Tag.BODY
    char entity_1[39];          // Tag.BODY
    entity_5 = 62;              // Tag.BODY
    while(entity_0 < entity_7){ // Tag.BODY
    entity_1[entity_9] = 'z';   // Tag.BUFWRITE_TAUT_SAFE
    entity_0++;                 // Tag.BODY
    entity_2[entity_5] = 'P';   // Tag.BUFWRITE_TAUT_SAFE
    }                           // Tag.BODY
    entity_3[entity_0] = 'w';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER