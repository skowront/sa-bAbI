#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_6[87];        // Tag.BODY
    entity_9 = rand();        // Tag.BODY
    entity_7 = 81;            // Tag.BODY
    if(entity_9 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 54;            // Tag.BODY
    }                         // Tag.BODY
    int entity_8;             // Tag.BODY
    char entity_5[78];        // Tag.BODY
    entity_6[entity_9] = 'U'; // Tag.BUFWRITE_COND_SAFE
    int entity_0;             // Tag.BODY
    entity_8 = 28;            // Tag.BODY
    entity_5[entity_8] = '0'; // Tag.BUFWRITE_TAUT_SAFE
    char entity_2[77];        // Tag.BODY
    entity_0 = 19;            // Tag.BODY
    entity_2[entity_0] = 'R'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER