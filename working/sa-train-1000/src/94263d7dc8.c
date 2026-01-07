#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_4[45];          // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_3 = 80;              // Tag.BODY
    entity_2 = 11;              // Tag.BODY
    entity_1 = 3;               // Tag.BODY
    char entity_9[47];          // Tag.BODY
    while(entity_2 < entity_3){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_1] = 'l';   // Tag.BUFWRITE_TAUT_SAFE
    entity_4[entity_2] = 'h';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER