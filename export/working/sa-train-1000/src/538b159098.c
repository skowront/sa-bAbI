#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 57;              // Tag.BODY
    char entity_8[95];          // Tag.BODY
    char entity_9[34];          // Tag.BODY
    entity_1 = 69;              // Tag.BODY
    entity_6 = 32;              // Tag.BODY
    entity_9[entity_6] = 'd';   // Tag.BUFWRITE_TAUT_SAFE
    while(entity_0 < entity_1){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_0] = '9';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER