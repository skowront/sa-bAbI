#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_6 = 2;             // Tag.BODY
    char entity_0[15];        // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    if(entity_8 < entity_6){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 42;            // Tag.BODY
    }                         // Tag.BODY
    char entity_4[9];         // Tag.BODY
    entity_0[entity_8] = 'm'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_3;             // Tag.BODY
    entity_3 = 11;            // Tag.BODY
    entity_4[entity_3] = 'K'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER