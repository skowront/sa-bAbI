#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_2[84];          // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_6 = 33;              // Tag.BODY
    entity_5 = 59;              // Tag.BODY
    while(entity_6 < entity_5){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_6] = 'Q';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER