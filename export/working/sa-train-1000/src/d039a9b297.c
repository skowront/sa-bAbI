#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_4[44];          // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_1[85];          // Tag.BODY
    entity_3 = 17;              // Tag.BODY
    entity_8 = 35;              // Tag.BODY
    entity_0 = 54;              // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 85;              // Tag.BODY
    char entity_2[52];          // Tag.BODY
    while(entity_0 < entity_8){ // Tag.BODY
    entity_2[entity_3] = 'z';   // Tag.BUFWRITE_TAUT_SAFE
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_0] = 'i';   // Tag.BUFWRITE_COND_UNSAFE
    entity_1[entity_7] = 'G';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER