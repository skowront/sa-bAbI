#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 6;               // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_3[63];          // Tag.BODY
    entity_4 = 10;              // Tag.BODY
    char entity_1[93];          // Tag.BODY
    entity_0 = 77;              // Tag.BODY
    while(entity_0 < entity_4){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    entity_3[entity_7] = '5';   // Tag.BUFWRITE_TAUT_SAFE
    }                           // Tag.BODY
    entity_1[entity_0] = '3';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER