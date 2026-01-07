#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_7[24];        // Tag.BODY
    int entity_2;             // Tag.BODY
    int entity_4;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_2 = 66;            // Tag.BODY
    char entity_0[23];        // Tag.BODY
    entity_4 = 14;            // Tag.BODY
    entity_1 = 51;            // Tag.BODY
    if(entity_1 < entity_4){  // Tag.BODY
    entity_7[entity_2] = 'h'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1 = 41;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 72;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_1] = 'J'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER