#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    int entity_7;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_6 = 5;             // Tag.BODY
    char entity_8[71];        // Tag.BODY
    entity_7 = rand();        // Tag.BODY
    char entity_5[3];         // Tag.BODY
    entity_9 = 36;            // Tag.BODY
    char entity_2[85];        // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 81;            // Tag.BODY
    if(entity_7 < entity_4){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8[entity_6] = 'W'; // Tag.BUFWRITE_TAUT_SAFE
    entity_7 = 18;            // Tag.BODY
    entity_2[entity_9] = 'R'; // Tag.BUFWRITE_TAUT_SAFE
    }                         // Tag.BODY
    entity_5[entity_7] = '5'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER