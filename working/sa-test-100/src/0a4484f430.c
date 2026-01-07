#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_6[52];          // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 34;              // Tag.BODY
    char entity_2[76];          // Tag.BODY
    entity_8 = 35;              // Tag.BODY
    entity_9 = 60;              // Tag.BODY
    while(entity_5 < entity_8){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_5] = 'u';   // Tag.BUFWRITE_COND_SAFE
    entity_2[entity_9] = 'f';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER