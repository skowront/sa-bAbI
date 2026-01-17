#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_4[22];          // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_0 = 2;               // Tag.BODY
    entity_7 = 4;               // Tag.BODY
    while(entity_0 < entity_7){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_0] = 'C';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER