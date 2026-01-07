#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_7 = 86;            // Tag.BODY
    entity_6 = 98;            // Tag.BODY
    char entity_5[5];         // Tag.BODY
    entity_3 = 59;            // Tag.BODY
    char entity_2[30];        // Tag.BODY
    if(entity_3 < entity_6){  // Tag.BODY
    entity_3 = 57;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 22;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_3] = 'I'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_8;             // Tag.BODY
    char entity_9[20];        // Tag.BODY
    entity_8 = 75;            // Tag.BODY
    entity_2[entity_7] = 'Q'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9[entity_8] = 'm'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER