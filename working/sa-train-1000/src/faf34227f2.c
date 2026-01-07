#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    char entity_0[32];          // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_8 = 34;              // Tag.BODY
    char entity_9[38];          // Tag.BODY
    entity_7 = 48;              // Tag.BODY
    entity_5 = 67;              // Tag.BODY
    entity_9[entity_5] = 'T';   // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_8 < entity_7){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_1[75];          // Tag.BODY
    entity_0[entity_8] = 'c';   // Tag.BUFWRITE_COND_UNSAFE
    entity_6 = 7;               // Tag.BODY
    entity_1[entity_6] = 'H';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER