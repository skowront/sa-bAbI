#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_9;             // Tag.BODY
    char entity_7[19];        // Tag.BODY
    entity_3 = 92;            // Tag.BODY
    entity_9 = rand();        // Tag.BODY
    if(entity_9 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 5;             // Tag.BODY
    }                         // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = 75;            // Tag.BODY
    char entity_1[66];        // Tag.BODY
    entity_1[entity_6] = 'W'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7[entity_9] = '0'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER