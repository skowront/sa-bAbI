#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_8 = 44;              // Tag.BODY
    char entity_2[74];          // Tag.BODY
    entity_1 = 7;               // Tag.BODY
    while(entity_1 < entity_8){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_5[16];          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_2[entity_1] = '7';   // Tag.BUFWRITE_COND_SAFE
    entity_6 = 19;              // Tag.BODY
    entity_5[entity_6] = 'i';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER