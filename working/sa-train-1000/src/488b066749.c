#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    entity_7 = 42;              // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_8[98];          // Tag.BODY
    entity_5 = 19;              // Tag.BODY
    while(entity_7 < entity_5){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_7] = 'y';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER