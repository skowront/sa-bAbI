#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    char entity_0[23];          // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 91;              // Tag.BODY
    char entity_4[72];          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = 97;              // Tag.BODY
    entity_5 = 61;              // Tag.BODY
    while(entity_9 < entity_1){ // Tag.BODY
    entity_4[entity_5] = 'b';   // Tag.BUFWRITE_TAUT_SAFE
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_0[entity_9] = 'N';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_2[31];          // Tag.BODY
    entity_7 = 68;              // Tag.BODY
    entity_2[entity_7] = 'f';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER