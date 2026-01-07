#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_5[54];          // Tag.BODY
    int entity_9;               // Tag.BODY
    char entity_8[56];          // Tag.BODY
    entity_9 = 43;              // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 16;              // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 35;              // Tag.BODY
    while(entity_2 < entity_9){ // Tag.BODY
    entity_5[entity_7] = 'Y';   // Tag.BUFWRITE_TAUT_SAFE
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_2] = 'X';   // Tag.BUFWRITE_COND_SAFE
    int entity_4;               // Tag.BODY
    entity_4 = 14;              // Tag.BODY
    char entity_6[74];          // Tag.BODY
    entity_6[entity_4] = 'Y';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER