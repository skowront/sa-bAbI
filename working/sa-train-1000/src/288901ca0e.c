#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_7[7];           // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 21;              // Tag.BODY
    entity_0 = 71;              // Tag.BODY
    while(entity_2 < entity_0){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_2] = 'z';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER