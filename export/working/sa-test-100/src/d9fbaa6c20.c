#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    entity_9 = 77;              // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_6[52];          // Tag.BODY
    entity_2 = 51;              // Tag.BODY
    while(entity_2 < entity_9){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_2] = 't';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER