#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = 96;              // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_7[5];           // Tag.BODY
    char entity_0[65];          // Tag.BODY
    char entity_4[81];          // Tag.BODY
    entity_1 = 84;              // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 46;              // Tag.BODY
    entity_5 = 37;              // Tag.BODY
    while(entity_6 < entity_5){ // Tag.BODY
    entity_4[entity_1] = 'D';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_6] = 'i';   // Tag.BUFWRITE_COND_UNSAFE
    entity_7[entity_8] = 'f';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER