#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_7[83];          // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 73;              // Tag.BODY
    char entity_2[26];          // Tag.BODY
    entity_1 = 10;              // Tag.BODY
    entity_4 = 67;              // Tag.BODY
    while(entity_0 < entity_1){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_0] = 'V';   // Tag.BUFWRITE_COND_SAFE
    entity_2[entity_4] = 'S';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER