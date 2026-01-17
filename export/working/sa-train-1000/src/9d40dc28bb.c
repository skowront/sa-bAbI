#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    char entity_8[69];          // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_7 = 3;               // Tag.BODY
    entity_0 = 66;              // Tag.BODY
    while(entity_7 < entity_0){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_7] = 'v';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER