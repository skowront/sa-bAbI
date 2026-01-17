#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    entity_8 = 49;              // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 21;              // Tag.BODY
    char entity_0[33];          // Tag.BODY
    while(entity_8 < entity_5){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_8] = '8';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER