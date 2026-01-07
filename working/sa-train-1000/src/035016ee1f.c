#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_5[39];          // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_3 = 33;              // Tag.BODY
    entity_1 = 30;              // Tag.BODY
    entity_8 = 60;              // Tag.BODY
    char entity_4[18];          // Tag.BODY
    while(entity_8 < entity_3){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_1] = 'T';   // Tag.BUFWRITE_TAUT_SAFE
    entity_4[entity_8] = 'W';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_7[41];          // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 84;              // Tag.BODY
    entity_7[entity_2] = 'e';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER