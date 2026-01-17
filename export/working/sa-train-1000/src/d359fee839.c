#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_8[45];          // Tag.BODY
    char entity_1[43];          // Tag.BODY
    entity_0 = 4;               // Tag.BODY
    entity_7 = 5;               // Tag.BODY
    entity_1[entity_0] = 's';   // Tag.BUFWRITE_TAUT_SAFE
    entity_6 = 80;              // Tag.BODY
    while(entity_6 < entity_7){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_6] = 'N';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER