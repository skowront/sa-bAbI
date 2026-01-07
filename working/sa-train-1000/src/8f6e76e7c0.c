#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_5[82];          // Tag.BODY
    entity_2 = 23;              // Tag.BODY
    entity_1 = 11;              // Tag.BODY
    while(entity_1 < entity_2){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_9[71];          // Tag.BODY
    entity_5[entity_1] = 'h';   // Tag.BUFWRITE_COND_SAFE
    entity_8 = 80;              // Tag.BODY
    entity_9[entity_8] = '9';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER