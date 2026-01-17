#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 98;              // Tag.BODY
    char entity_2[3];           // Tag.BODY
    entity_3 = 50;              // Tag.BODY
    while(entity_1 < entity_3){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_1] = 'L';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER