#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 77;            // Tag.BODY
    char entity_1[44];        // Tag.BODY
    if(entity_2 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 7;             // Tag.BODY
    }                         // Tag.BODY
    int entity_0;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_1[entity_2] = 'b'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_8[91];        // Tag.BODY
    entity_9 = 84;            // Tag.BODY
    entity_8[entity_9] = 'm'; // Tag.BUFWRITE_TAUT_SAFE
    entity_0 = 42;            // Tag.BODY
    char entity_7[4];         // Tag.BODY
    entity_7[entity_0] = 'n'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER