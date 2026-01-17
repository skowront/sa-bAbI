#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_4[86];        // Tag.BODY
    entity_6 = 47;            // Tag.BODY
    entity_7 = 29;            // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_9;             // Tag.BODY
    char entity_8[67];        // Tag.BODY
    entity_1 = 5;             // Tag.BODY
    entity_9 = 32;            // Tag.BODY
    char entity_5[51];        // Tag.BODY
    if(entity_6 < entity_9){  // Tag.BODY
    entity_4[entity_1] = 'g'; // Tag.BUFWRITE_TAUT_SAFE
    entity_6 = 81;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 14;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_6] = 'a'; // Tag.BUFWRITE_COND_SAFE
    entity_5[entity_7] = 'B'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER