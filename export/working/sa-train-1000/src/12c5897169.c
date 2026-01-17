#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_6[28];          // Tag.BODY
    char entity_4[63];          // Tag.BODY
    entity_1 = 92;              // Tag.BODY
    entity_8 = 39;              // Tag.BODY
    entity_6[entity_1] = 'o';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3 = 96;              // Tag.BODY
    while(entity_8 < entity_3){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_8] = 'b';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER