#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_4;               // Tag.BODY
    char entity_8[77];          // Tag.BODY
    entity_3 = 27;              // Tag.BODY
    entity_7 = 6;               // Tag.BODY
    char entity_9[43];          // Tag.BODY
    entity_4 = 68;              // Tag.BODY
    while(entity_4 < entity_3){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_7] = 's';   // Tag.BUFWRITE_TAUT_SAFE
    entity_8[entity_4] = 'H';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER