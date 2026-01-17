#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_8 = 9;               // Tag.BODY
    entity_3 = 24;              // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 90;              // Tag.BODY
    char entity_2[61];          // Tag.BODY
    char entity_6[24];          // Tag.BODY
    while(entity_5 < entity_8){ // Tag.BODY
    entity_2[entity_3] = 'y';   // Tag.BUFWRITE_TAUT_SAFE
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_5] = '6';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER