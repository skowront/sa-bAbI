#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_8[72];          // Tag.BODY
    char entity_5[8];           // Tag.BODY
    entity_0 = 79;              // Tag.BODY
    entity_4 = 14;              // Tag.BODY
    entity_2 = 87;              // Tag.BODY
    while(entity_2 < entity_0){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    entity_8[entity_4] = 'K';   // Tag.BUFWRITE_TAUT_SAFE
    }                           // Tag.BODY
    char entity_9[16];          // Tag.BODY
    entity_5[entity_2] = '5';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_3;               // Tag.BODY
    entity_3 = 53;              // Tag.BODY
    entity_9[entity_3] = '8';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER