#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    char entity_0[31];          // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 19;              // Tag.BODY
    entity_7 = 3;               // Tag.BODY
    while(entity_7 < entity_1){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_7] = 'W';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER