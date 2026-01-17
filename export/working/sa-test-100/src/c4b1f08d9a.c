#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_4[39];          // Tag.BODY
    char entity_8[51];          // Tag.BODY
    entity_5 = 25;              // Tag.BODY
    entity_1 = 8;               // Tag.BODY
    entity_4[entity_5] = 'f';   // Tag.BUFWRITE_TAUT_SAFE
    entity_6 = 8;               // Tag.BODY
    while(entity_6 < entity_1){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_8[entity_6] = 'W';   // Tag.BUFWRITE_COND_SAFE
    entity_9 = 69;              // Tag.BODY
    char entity_0[99];          // Tag.BODY
    entity_0[entity_9] = 'T';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER