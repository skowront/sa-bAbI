#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_9 = 24;            // Tag.BODY
    entity_7 = 31;            // Tag.BODY
    entity_6 = 28;            // Tag.BODY
    char entity_4[58];        // Tag.BODY
    char entity_1[40];        // Tag.BODY
    if(entity_9 < entity_7){  // Tag.BODY
    entity_9 = 2;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 79;            // Tag.BODY
    }                         // Tag.BODY
    int entity_8;             // Tag.BODY
    char entity_5[92];        // Tag.BODY
    entity_1[entity_9] = 'J'; // Tag.BUFWRITE_COND_SAFE
    entity_8 = 13;            // Tag.BODY
    entity_5[entity_8] = 'y'; // Tag.BUFWRITE_TAUT_SAFE
    entity_4[entity_6] = 'U'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER