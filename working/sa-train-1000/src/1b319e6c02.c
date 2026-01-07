#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_4[46];          // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_8[72];          // Tag.BODY
    entity_6 = 61;              // Tag.BODY
    entity_7 = 96;              // Tag.BODY
    entity_4[entity_7] = 'r';   // Tag.BUFWRITE_TAUT_UNSAFE
    int entity_2;               // Tag.BODY
    entity_2 = 26;              // Tag.BODY
    while(entity_2 < entity_6){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_1[97];          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = 51;              // Tag.BODY
    entity_1[entity_9] = 'o';   // Tag.BUFWRITE_TAUT_SAFE
    entity_8[entity_2] = 'Q';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER