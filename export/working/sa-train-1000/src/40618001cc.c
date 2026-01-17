#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 90;              // Tag.BODY
    entity_4 = 73;              // Tag.BODY
    char entity_5[56];          // Tag.BODY
    while(entity_0 < entity_4){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_0] = '1';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER