#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    int entity_7;             // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_0[98];        // Tag.BODY
    char entity_2[60];        // Tag.BODY
    entity_1 = 43;            // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    entity_7 = 23;            // Tag.BODY
    if(entity_6 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 29;            // Tag.BODY
    }                         // Tag.BODY
    int entity_9;             // Tag.BODY
    char entity_3[12];        // Tag.BODY
    entity_2[entity_1] = 'j'; // Tag.BUFWRITE_TAUT_SAFE
    entity_0[entity_6] = 'B'; // Tag.BUFWRITE_COND_SAFE
    entity_9 = 24;            // Tag.BODY
    entity_3[entity_9] = 'S'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER