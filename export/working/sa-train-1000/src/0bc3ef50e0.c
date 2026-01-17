#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    char entity_7[89];          // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_1 = 7;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_3 = 77;              // Tag.BODY
    char entity_0[31];          // Tag.BODY
    entity_0[entity_1] = 'g';   // Tag.BUFWRITE_TAUT_SAFE
    entity_5 = 9;               // Tag.BODY
    while(entity_5 < entity_3){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_5] = 'c';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER