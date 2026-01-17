#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 73;              // Tag.BODY
    entity_3 = 81;              // Tag.BODY
    char entity_5[55];          // Tag.BODY
    while(entity_1 < entity_3){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 44;              // Tag.BODY
    entity_5[entity_1] = 'U';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_7[33];          // Tag.BODY
    entity_7[entity_4] = 'x';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER