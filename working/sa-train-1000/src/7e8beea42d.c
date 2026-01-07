#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_9[47];          // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_3 = 77;              // Tag.BODY
    entity_7 = 65;              // Tag.BODY
    while(entity_7 < entity_3){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_7] = 'W';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER