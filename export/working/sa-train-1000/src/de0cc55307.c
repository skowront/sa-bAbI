#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    entity_2 = 52;              // Tag.BODY
    char entity_4[48];          // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_3 = 12;              // Tag.BODY
    while(entity_3 < entity_2){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_1[27];          // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_4[entity_3] = '8';   // Tag.BUFWRITE_COND_UNSAFE
    entity_5 = 98;              // Tag.BODY
    char entity_8[64];          // Tag.BODY
    entity_7 = 21;              // Tag.BODY
    entity_1[entity_7] = 'C';   // Tag.BUFWRITE_TAUT_SAFE
    entity_8[entity_5] = '2';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER