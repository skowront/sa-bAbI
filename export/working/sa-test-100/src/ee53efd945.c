#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    char entity_7[6];           // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_2 = 41;              // Tag.BODY
    entity_0 = 99;              // Tag.BODY
    while(entity_0 < entity_2){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 76;              // Tag.BODY
    entity_7[entity_0] = 'V';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_6[46];          // Tag.BODY
    entity_6[entity_8] = 'C';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER