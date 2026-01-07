#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    entity_3 = rand();        // Tag.BODY
    int entity_5;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_5 = 46;            // Tag.BODY
    entity_1 = 80;            // Tag.BODY
    char entity_9[42];        // Tag.BODY
    char entity_6[73];        // Tag.BODY
    if(entity_3 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 41;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_1] = 'L'; // Tag.BUFWRITE_TAUT_UNSAFE
    int entity_0;             // Tag.BODY
    entity_9[entity_3] = 'c'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_8[86];        // Tag.BODY
    entity_0 = 23;            // Tag.BODY
    entity_8[entity_0] = 'E'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER