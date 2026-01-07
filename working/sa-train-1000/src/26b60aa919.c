#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    entity_3 = 67;              // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_9[54];          // Tag.BODY
    entity_8 = 29;              // Tag.BODY
    while(entity_8 < entity_3){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_7[16];          // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_9[entity_8] = '8';   // Tag.BUFWRITE_COND_UNSAFE
    entity_2 = 7;               // Tag.BODY
    entity_7[entity_2] = 'R';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER