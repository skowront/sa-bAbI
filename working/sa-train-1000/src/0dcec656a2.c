#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_4;               // Tag.BODY
    char entity_6[76];          // Tag.BODY
    entity_4 = 62;              // Tag.BODY
    entity_3 = 4;               // Tag.BODY
    while(entity_4 < entity_3){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_6[entity_4] = 'E';   // Tag.BUFWRITE_COND_SAFE
    char entity_2[36];          // Tag.BODY
    entity_5 = 24;              // Tag.BODY
    entity_8 = 61;              // Tag.BODY
    char entity_1[15];          // Tag.BODY
    entity_1[entity_8] = 'k';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_5] = 'l';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER