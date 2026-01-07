#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_0[84];          // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 53;              // Tag.BODY
    entity_7 = 37;              // Tag.BODY
    while(entity_8 < entity_7){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_8] = 'd';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER