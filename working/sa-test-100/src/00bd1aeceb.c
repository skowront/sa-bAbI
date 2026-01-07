#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    char entity_8[72];          // Tag.BODY
    int entity_9;               // Tag.BODY
    char entity_7[16];          // Tag.BODY
    entity_9 = 6;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 32;              // Tag.BODY
    entity_1 = 27;              // Tag.BODY
    while(entity_1 < entity_9){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    entity_8[entity_0] = '8';   // Tag.BUFWRITE_TAUT_SAFE
    }                           // Tag.BODY
    entity_7[entity_1] = 'j';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER