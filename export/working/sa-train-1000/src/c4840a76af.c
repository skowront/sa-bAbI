#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_6[66];          // Tag.BODY
    entity_2 = 45;              // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 92;              // Tag.BODY
    entity_0 = 96;              // Tag.BODY
    char entity_9[62];          // Tag.BODY
    while(entity_2 < entity_0){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_6[entity_2] = 'l';   // Tag.BUFWRITE_COND_UNSAFE
    entity_9[entity_1] = 'C';   // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_3[59];          // Tag.BODY
    entity_4 = 38;              // Tag.BODY
    entity_3[entity_4] = '1';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER