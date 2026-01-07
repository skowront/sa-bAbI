#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_4[99];          // Tag.BODY
    entity_0 = 4;               // Tag.BODY
    entity_3 = 73;              // Tag.BODY
    while(entity_3 < entity_0){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_9[7];           // Tag.BODY
    char entity_7[53];          // Tag.BODY
    entity_1 = 8;               // Tag.BODY
    entity_9[entity_1] = 'T';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_4[entity_3] = 'f';   // Tag.BUFWRITE_COND_SAFE
    entity_6 = 35;              // Tag.BODY
    entity_7[entity_6] = 'T';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER