#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_7 = 20;              // Tag.BODY
    char entity_8[26];          // Tag.BODY
    entity_5 = 60;              // Tag.BODY
    entity_0 = 14;              // Tag.BODY
    char entity_4[68];          // Tag.BODY
    while(entity_5 < entity_7){ // Tag.BODY
    entity_8[entity_0] = 'o';   // Tag.BUFWRITE_TAUT_SAFE
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_3[66];          // Tag.BODY
    entity_4[entity_5] = 'Q';   // Tag.BUFWRITE_COND_SAFE
    int entity_9;               // Tag.BODY
    entity_9 = 87;              // Tag.BODY
    entity_3[entity_9] = 't';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER