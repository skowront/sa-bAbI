#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_6[15];          // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 5;               // Tag.BODY
    char entity_0[3];           // Tag.BODY
    entity_6[entity_4] = 't';   // Tag.BUFWRITE_TAUT_SAFE
    entity_3 = 0;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 10;              // Tag.BODY
    while(entity_5 < entity_3){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_5] = '5';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER