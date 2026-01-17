#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    char entity_5[59];        // Tag.BODY
    char entity_8[56];        // Tag.BODY
    entity_4 = 2;             // Tag.BODY
    int entity_2;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    entity_2 = 40;            // Tag.BODY
    if(entity_0 < entity_4){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 6;             // Tag.BODY
    entity_5[entity_2] = '9'; // Tag.BUFWRITE_TAUT_SAFE
    }                         // Tag.BODY
    char entity_9[14];        // Tag.BODY
    entity_8[entity_0] = 'l'; // Tag.BUFWRITE_COND_SAFE
    int entity_3;             // Tag.BODY
    entity_3 = 45;            // Tag.BODY
    entity_9[entity_3] = 'i'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER