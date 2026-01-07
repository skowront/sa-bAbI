#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    char entity_2[91];          // Tag.BODY
    char entity_9[35];          // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_4 = 65;              // Tag.BODY
    entity_5 = 3;               // Tag.BODY
    entity_9[entity_4] = 'O';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1 = 43;              // Tag.BODY
    while(entity_1 < entity_5){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_3 = 1;               // Tag.BODY
    char entity_7[51];          // Tag.BODY
    entity_7[entity_3] = 'o';   // Tag.BUFWRITE_TAUT_SAFE
    entity_2[entity_1] = '0';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER