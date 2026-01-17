#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_4[96];        // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_8[94];        // Tag.BODY
    int entity_2;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_2 = 85;            // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    entity_3 = 54;            // Tag.BODY
    if(entity_0 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 84;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_0] = 'A'; // Tag.BUFWRITE_COND_SAFE
    int entity_9;             // Tag.BODY
    entity_9 = 47;            // Tag.BODY
    char entity_7[34];        // Tag.BODY
    entity_7[entity_9] = 'E'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_4[entity_2] = '1'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER