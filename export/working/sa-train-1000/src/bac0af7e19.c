#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_3[76];          // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 30;              // Tag.BODY
    entity_8 = 13;              // Tag.BODY
    while(entity_4 < entity_8){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 88;              // Tag.BODY
    char entity_5[53];          // Tag.BODY
    entity_3[entity_4] = 'x';   // Tag.BUFWRITE_COND_SAFE
    char entity_7[36];          // Tag.BODY
    entity_6 = 95;              // Tag.BODY
    entity_7[entity_6] = 'L';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5[entity_2] = 'L';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER