#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_9[38];          // Tag.BODY
    entity_6 = 83;              // Tag.BODY
    char entity_3[86];          // Tag.BODY
    entity_0 = 24;              // Tag.BODY
    entity_4 = 15;              // Tag.BODY
    while(entity_4 < entity_6){ // Tag.BODY
    entity_9[entity_0] = 'Y';   // Tag.BUFWRITE_TAUT_SAFE
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_4] = '3';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER