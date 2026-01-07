#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 77;              // Tag.BODY
    char entity_9[44];          // Tag.BODY
    entity_0 = 23;              // Tag.BODY
    entity_7 = 8;               // Tag.BODY
    char entity_5[83];          // Tag.BODY
    while(entity_7 < entity_0){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_7] = '5';   // Tag.BUFWRITE_COND_SAFE
    int entity_3;               // Tag.BODY
    entity_5[entity_1] = '2';   // Tag.BUFWRITE_TAUT_SAFE
    entity_3 = 2;               // Tag.BODY
    char entity_6[31];          // Tag.BODY
    entity_6[entity_3] = 't';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER