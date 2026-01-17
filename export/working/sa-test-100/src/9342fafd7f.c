#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_4 = 80;              // Tag.BODY
    entity_0 = 77;              // Tag.BODY
    entity_9 = 42;              // Tag.BODY
    char entity_3[54];          // Tag.BODY
    char entity_8[49];          // Tag.BODY
    while(entity_9 < entity_4){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_0] = 'I';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8[entity_9] = 'h';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER