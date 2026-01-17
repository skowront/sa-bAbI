#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_6 = 36;              // Tag.BODY
    entity_7 = 33;              // Tag.BODY
    char entity_0[68];          // Tag.BODY
    entity_1 = 22;              // Tag.BODY
    char entity_8[27];          // Tag.BODY
    while(entity_6 < entity_7){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    entity_8[entity_1] = 'b';   // Tag.BUFWRITE_TAUT_SAFE
    }                           // Tag.BODY
    entity_0[entity_6] = '9';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER