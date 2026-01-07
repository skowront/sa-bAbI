#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_9;               // Tag.BODY
    char entity_8[97];          // Tag.BODY
    entity_2 = 79;              // Tag.BODY
    entity_9 = 75;              // Tag.BODY
    while(entity_9 < entity_2){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_7[59];          // Tag.BODY
    char entity_0[7];           // Tag.BODY
    entity_3 = 73;              // Tag.BODY
    entity_1 = 44;              // Tag.BODY
    entity_8[entity_9] = 'b';   // Tag.BUFWRITE_COND_SAFE
    entity_7[entity_3] = 'N';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0[entity_1] = 'l';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER