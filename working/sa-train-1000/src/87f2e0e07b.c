#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = 1;             // Tag.BODY
    char entity_0[63];        // Tag.BODY
    entity_6 = 38;            // Tag.BODY
    if(entity_7 < entity_6){  // Tag.BODY
    entity_7 = 15;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 16;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_7] = 'b'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER