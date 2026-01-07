#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_6[83];          // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 39;              // Tag.BODY
    char entity_1[61];          // Tag.BODY
    entity_9 = 26;              // Tag.BODY
    char entity_4[36];          // Tag.BODY
    entity_7 = 46;              // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 83;              // Tag.BODY
    while(entity_0 < entity_9){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_0] = 'M';   // Tag.BUFWRITE_COND_SAFE
    entity_4[entity_5] = '5';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1[entity_7] = '4';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER