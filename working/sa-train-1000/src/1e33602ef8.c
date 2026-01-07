#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_9[47];          // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 80;              // Tag.BODY
    char entity_8[54];          // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 74;              // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 29;              // Tag.BODY
    entity_9[entity_2] = 'U';   // Tag.BUFWRITE_TAUT_SAFE
    while(entity_5 < entity_4){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_8[entity_5] = 'Z';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_1[68];          // Tag.BODY
    entity_6 = 77;              // Tag.BODY
    entity_1[entity_6] = '9';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER