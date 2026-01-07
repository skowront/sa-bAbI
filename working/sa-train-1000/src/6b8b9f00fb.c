#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_5[95];        // Tag.BODY
    int entity_3;             // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_6 = 28;            // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    char entity_7[29];        // Tag.BODY
    entity_3 = 40;            // Tag.BODY
    if(entity_0 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_7[entity_6] = 'W'; // Tag.BUFWRITE_TAUT_SAFE
    entity_0 = 54;            // Tag.BODY
    }                         // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_5[entity_0] = '2'; // Tag.BUFWRITE_COND_SAFE
    char entity_1[25];        // Tag.BODY
    entity_4 = 56;            // Tag.BODY
    entity_1[entity_4] = '1'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER