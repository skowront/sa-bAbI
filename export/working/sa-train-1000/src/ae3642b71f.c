#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_5;             // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_2[56];        // Tag.BODY
    char entity_9[25];        // Tag.BODY
    entity_1 = 7;             // Tag.BODY
    entity_3 = 51;            // Tag.BODY
    entity_5 = 64;            // Tag.BODY
    if(entity_5 < entity_1){  // Tag.BODY
    entity_5 = 35;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 76;            // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_3] = 'Y'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_5] = 'G'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER