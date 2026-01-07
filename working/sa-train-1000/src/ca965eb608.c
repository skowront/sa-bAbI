#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_0[87];        // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_5[37];        // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_6 = 65;            // Tag.BODY
    entity_5[entity_6] = 'J'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1 = 85;            // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    if(entity_2 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 36;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_2] = 'Y'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER