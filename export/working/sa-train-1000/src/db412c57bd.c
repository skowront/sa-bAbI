#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_3[70];        // Tag.BODY
    int entity_5;             // Tag.BODY
    int entity_7;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_5 = 68;            // Tag.BODY
    entity_7 = 70;            // Tag.BODY
    char entity_4[48];        // Tag.BODY
    entity_9 = 40;            // Tag.BODY
    entity_3[entity_7] = 'w'; // Tag.BUFWRITE_TAUT_UNSAFE
    if(entity_5 < entity_9){  // Tag.BODY
    entity_5 = 5;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 5;             // Tag.BODY
    }                         // Tag.BODY
    char entity_2[96];        // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_4[entity_5] = 'W'; // Tag.BUFWRITE_COND_SAFE
    entity_6 = 5;             // Tag.BODY
    entity_2[entity_6] = 'V'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER