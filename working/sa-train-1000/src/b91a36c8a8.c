#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_3[47];          // Tag.BODY
    entity_6 = 98;              // Tag.BODY
    entity_8 = 99;              // Tag.BODY
    while(entity_8 < entity_6){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 46;              // Tag.BODY
    char entity_0[24];          // Tag.BODY
    entity_0[entity_5] = 'Y';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3[entity_8] = 'n';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER