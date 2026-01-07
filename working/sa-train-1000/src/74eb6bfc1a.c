#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 83;              // Tag.BODY
    char entity_7[39];          // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_1 = 73;              // Tag.BODY
    char entity_9[78];          // Tag.BODY
    entity_3 = 26;              // Tag.BODY
    while(entity_1 < entity_3){ // Tag.BODY
    entity_9[entity_5] = 'a';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_7[entity_1] = 'b';   // Tag.BUFWRITE_COND_UNSAFE
    entity_0 = 14;              // Tag.BODY
    char entity_2[88];          // Tag.BODY
    entity_2[entity_0] = 'Q';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER