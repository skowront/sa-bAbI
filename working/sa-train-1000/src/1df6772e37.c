#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_3[46];        // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    entity_9 = 42;            // Tag.BODY
    if(entity_2 < entity_9){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 7;             // Tag.BODY
    }                         // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_4[64];        // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_3[entity_2] = 'o'; // Tag.BUFWRITE_COND_SAFE
    entity_0 = 22;            // Tag.BODY
    entity_7 = 38;            // Tag.BODY
    entity_4[entity_7] = 'k'; // Tag.BUFWRITE_TAUT_SAFE
    char entity_1[79];        // Tag.BODY
    entity_1[entity_0] = 'm'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER