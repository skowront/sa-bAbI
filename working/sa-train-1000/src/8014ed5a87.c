#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    char entity_1[95];          // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_8 = 28;              // Tag.BODY
    entity_3 = 7;               // Tag.BODY
    while(entity_8 < entity_3){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_2[74];          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_1[entity_8] = 'o';   // Tag.BUFWRITE_COND_SAFE
    entity_9 = 91;              // Tag.BODY
    entity_2[entity_9] = 'H';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER