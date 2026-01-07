#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_9;               // Tag.BODY
    char entity_6[72];          // Tag.BODY
    entity_9 = 87;              // Tag.BODY
    entity_0 = 73;              // Tag.BODY
    while(entity_9 < entity_0){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_6[entity_9] = 'J';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_3[59];          // Tag.BODY
    entity_1 = 47;              // Tag.BODY
    entity_3[entity_1] = 'E';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER