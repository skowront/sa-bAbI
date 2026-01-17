#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_1[12];        // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    entity_7 = 85;            // Tag.BODY
    if(entity_2 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 56;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_2] = 'X'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_9[93];        // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = 41;            // Tag.BODY
    entity_9[entity_5] = 'E'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER