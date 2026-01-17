#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    entity_8 = 97;            // Tag.BODY
    char entity_3[34];        // Tag.BODY
    if(entity_4 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 98;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_4] = 'p'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER