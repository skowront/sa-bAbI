#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 48;              // Tag.BODY
    char entity_8[1];           // Tag.BODY
    entity_3 = 68;              // Tag.BODY
    while(entity_4 < entity_3){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_4] = '0';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER