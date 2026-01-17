#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_1 = 92;              // Tag.BODY
    char entity_5[17];          // Tag.BODY
    entity_9 = 45;              // Tag.BODY
    while(entity_1 < entity_9){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_1] = 'd';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER