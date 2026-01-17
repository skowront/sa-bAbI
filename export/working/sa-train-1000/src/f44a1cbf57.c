#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_6 = 73;              // Tag.BODY
    char entity_4[80];          // Tag.BODY
    entity_1 = 16;              // Tag.BODY
    while(entity_6 < entity_1){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_6] = 'Q';   // Tag.BUFWRITE_COND_SAFE
    int entity_0;               // Tag.BODY
    char entity_3[55];          // Tag.BODY
    entity_0 = 70;              // Tag.BODY
    entity_3[entity_0] = '6';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER