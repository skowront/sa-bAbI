#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 81;              // Tag.BODY
    char entity_2[29];          // Tag.BODY
    char entity_8[90];          // Tag.BODY
    entity_6 = 91;              // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_8[entity_7] = 'G';   // Tag.BUFWRITE_TAUT_SAFE
    entity_4 = 50;              // Tag.BODY
    while(entity_6 < entity_4){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_6] = 'z';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER