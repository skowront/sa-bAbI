#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    int entity_2;             // Tag.BODY
    int entity_9;             // Tag.BODY
    char entity_1[36];        // Tag.BODY
    entity_6 = 77;            // Tag.BODY
    char entity_0[18];        // Tag.BODY
    entity_2 = 85;            // Tag.BODY
    entity_9 = 66;            // Tag.BODY
    if(entity_6 < entity_9){  // Tag.BODY
    entity_1[entity_2] = 'B'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6 = 66;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 63;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_6] = 'x'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_4;             // Tag.BODY
    char entity_3[17];        // Tag.BODY
    entity_4 = 86;            // Tag.BODY
    entity_3[entity_4] = 'c'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER