#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_8[50];          // Tag.BODY
    entity_6 = 49;              // Tag.BODY
    entity_5 = 1;               // Tag.BODY
    while(entity_5 < entity_6){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_8[entity_5] = 'z';   // Tag.BUFWRITE_COND_SAFE
    entity_0 = 30;              // Tag.BODY
    char entity_1[56];          // Tag.BODY
    entity_1[entity_0] = 'I';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER