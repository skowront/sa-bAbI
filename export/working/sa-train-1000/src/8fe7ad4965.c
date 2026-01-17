#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_9;             // Tag.BODY
    char entity_2[63];        // Tag.BODY
    entity_9 = rand();        // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_0[77];        // Tag.BODY
    entity_8 = 58;            // Tag.BODY
    entity_3 = 80;            // Tag.BODY
    if(entity_9 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 75;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_9] = 'c'; // Tag.BUFWRITE_COND_UNSAFE
    entity_2[entity_8] = 's'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER