#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_2 = 27;            // Tag.BODY
    entity_1 = 29;            // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_5[48];        // Tag.BODY
    entity_3 = rand();        // Tag.BODY
    char entity_6[97];        // Tag.BODY
    if(entity_3 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6[entity_2] = 'B'; // Tag.BUFWRITE_TAUT_SAFE
    entity_3 = 1;             // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_3] = 'g'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER