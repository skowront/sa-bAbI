#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_7[28];          // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_5 = 76;              // Tag.BODY
    entity_1 = 25;              // Tag.BODY
    while(entity_1 < entity_5){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_2[92];          // Tag.BODY
    entity_7[entity_1] = 'v';   // Tag.BUFWRITE_COND_UNSAFE
    entity_8 = 9;               // Tag.BODY
    entity_2[entity_8] = 'Q';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER