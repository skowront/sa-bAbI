#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 50;              // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_0[41];          // Tag.BODY
    entity_5 = 83;              // Tag.BODY
    char entity_8[60];          // Tag.BODY
    entity_3 = 46;              // Tag.BODY
    while(entity_4 < entity_5){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_0[entity_4] = '4';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_9[85];          // Tag.BODY
    entity_8[entity_3] = '1';   // Tag.BUFWRITE_TAUT_SAFE
    entity_7 = 79;              // Tag.BODY
    entity_9[entity_7] = 'Y';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER