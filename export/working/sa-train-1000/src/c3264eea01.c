#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_4 = 63;              // Tag.BODY
    char entity_2[0];           // Tag.BODY
    entity_7 = 18;              // Tag.BODY
    while(entity_7 < entity_4){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = 47;              // Tag.BODY
    entity_2[entity_7] = 'd';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_8[45];          // Tag.BODY
    entity_8[entity_9] = 'U';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER