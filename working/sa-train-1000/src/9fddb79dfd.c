#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    char entity_7[66];        // Tag.BODY
    entity_3 = 50;            // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_5[6];         // Tag.BODY
    entity_2 = 74;            // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 24;            // Tag.BODY
    if(entity_4 < entity_2){  // Tag.BODY
    entity_5[entity_3] = 'm'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_4 = 49;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 96;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_4] = 'N'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER