#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_9[68];          // Tag.BODY
    entity_1 = 4;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 9;               // Tag.BODY
    entity_8 = 22;              // Tag.BODY
    entity_9[entity_8] = 'y';   // Tag.BUFWRITE_TAUT_SAFE
    char entity_0[79];          // Tag.BODY
    while(entity_1 < entity_2){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_5[97];          // Tag.BODY
    entity_0[entity_1] = '5';   // Tag.BUFWRITE_COND_SAFE
    int entity_7;               // Tag.BODY
    entity_7 = 46;              // Tag.BODY
    entity_5[entity_7] = '0';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER