#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_7[28];          // Tag.BODY
    char entity_6[0];           // Tag.BODY
    entity_1 = 37;              // Tag.BODY
    entity_3 = 58;              // Tag.BODY
    entity_8 = 83;              // Tag.BODY
    while(entity_1 < entity_8){ // Tag.BODY
    entity_7[entity_3] = 'c';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_5[68];          // Tag.BODY
    entity_2 = 58;              // Tag.BODY
    entity_6[entity_1] = '0';   // Tag.BUFWRITE_COND_UNSAFE
    entity_5[entity_2] = 'V';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER