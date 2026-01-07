#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    char entity_0[24];        // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_2 = 49;            // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    if(entity_1 < entity_2){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 59;            // Tag.BODY
    }                         // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 96;            // Tag.BODY
    entity_0[entity_1] = '7'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_4[9];         // Tag.BODY
    entity_4[entity_3] = 'B'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER