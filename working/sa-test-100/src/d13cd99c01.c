#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_8[28];        // Tag.BODY
    entity_1 = 56;            // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    if(entity_2 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 34;            // Tag.BODY
    }                         // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_8[entity_2] = 'W'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_9[22];        // Tag.BODY
    char entity_4[97];        // Tag.BODY
    entity_6 = 95;            // Tag.BODY
    entity_9[entity_6] = 'J'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3 = 85;            // Tag.BODY
    entity_4[entity_3] = 'I'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER