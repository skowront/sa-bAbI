#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_2[92];          // Tag.BODY
    entity_1 = 60;              // Tag.BODY
    entity_0 = 39;              // Tag.BODY
    while(entity_0 < entity_1){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_7[52];          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_2[entity_0] = 'M';   // Tag.BUFWRITE_COND_SAFE
    char entity_3[26];          // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 22;              // Tag.BODY
    entity_3[entity_5] = 'h';   // Tag.BUFWRITE_TAUT_SAFE
    entity_6 = 35;              // Tag.BODY
    entity_7[entity_6] = 'D';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER