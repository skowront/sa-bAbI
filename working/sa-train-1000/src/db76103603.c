#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_2 = 72;              // Tag.BODY
    char entity_1[89];          // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_5[89];          // Tag.BODY
    entity_8 = 42;              // Tag.BODY
    entity_7 = 20;              // Tag.BODY
    entity_5[entity_2] = 'q';   // Tag.BUFWRITE_TAUT_SAFE
    while(entity_8 < entity_7){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_8] = 'f';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER