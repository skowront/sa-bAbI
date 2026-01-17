#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_8[78];          // Tag.BODY
    entity_0 = 6;               // Tag.BODY
    entity_1 = 32;              // Tag.BODY
    while(entity_0 < entity_1){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_0] = 'A';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER