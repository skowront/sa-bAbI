#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    entity_6 = 45;            // Tag.BODY
    char entity_7[19];        // Tag.BODY
    if(entity_0 < entity_6){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 88;            // Tag.BODY
    }                         // Tag.BODY
    int entity_4;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_4 = 23;            // Tag.BODY
    char entity_5[32];        // Tag.BODY
    entity_7[entity_0] = 'I'; // Tag.BUFWRITE_COND_UNSAFE
    entity_8 = 26;            // Tag.BODY
    entity_5[entity_8] = 'J'; // Tag.BUFWRITE_TAUT_SAFE
    char entity_2[1];         // Tag.BODY
    entity_2[entity_4] = 'Y'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER