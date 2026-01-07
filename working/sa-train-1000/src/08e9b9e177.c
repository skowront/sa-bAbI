#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    entity_2 = 28;              // Tag.BODY
    char entity_1[32];          // Tag.BODY
    char entity_3[49];          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_3[entity_2] = 'o';   // Tag.BUFWRITE_TAUT_SAFE
    entity_6 = 17;              // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 13;              // Tag.BODY
    while(entity_6 < entity_7){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_6] = 'H';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER