#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    entity_7 = 53;              // Tag.BODY
    char entity_0[4];           // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 3;               // Tag.BODY
    while(entity_7 < entity_1){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_7] = '2';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER