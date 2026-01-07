#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_8;             // Tag.BODY
    char entity_5[10];        // Tag.BODY
    entity_6 = 30;            // Tag.BODY
    char entity_4[92];        // Tag.BODY
    entity_8 = 42;            // Tag.BODY
    entity_7 = 41;            // Tag.BODY
    if(entity_8 < entity_7){  // Tag.BODY
    entity_8 = 54;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 47;            // Tag.BODY
    entity_5[entity_6] = '7'; // Tag.BUFWRITE_TAUT_UNSAFE
    }                         // Tag.BODY
    char entity_1[74];        // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_4[entity_8] = 'm'; // Tag.BUFWRITE_COND_SAFE
    entity_2 = 17;            // Tag.BODY
    entity_1[entity_2] = 'h'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER