#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_8[12];          // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_2 = 79;              // Tag.BODY
    entity_1 = 7;               // Tag.BODY
    char entity_6[29];          // Tag.BODY
    entity_3 = 83;              // Tag.BODY
    while(entity_1 < entity_3){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 31;              // Tag.BODY
    entity_6[entity_1] = 'Y';   // Tag.BUFWRITE_COND_UNSAFE
    entity_8[entity_2] = 'z';   // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_5[0];           // Tag.BODY
    entity_5[entity_4] = 'v';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER