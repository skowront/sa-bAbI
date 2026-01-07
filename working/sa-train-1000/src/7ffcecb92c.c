#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_4[44];          // Tag.BODY
    entity_5 = 35;              // Tag.BODY
    entity_9 = 48;              // Tag.BODY
    while(entity_9 < entity_5){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_7[6];           // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_1[94];          // Tag.BODY
    entity_8 = 87;              // Tag.BODY
    entity_1[entity_8] = 'J';   // Tag.BUFWRITE_TAUT_SAFE
    entity_6 = 64;              // Tag.BODY
    entity_7[entity_6] = 'H';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_4[entity_9] = 'o';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER