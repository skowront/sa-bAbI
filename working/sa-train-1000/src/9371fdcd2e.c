#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    char entity_1[62];        // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_4[42];        // Tag.BODY
    entity_3 = 2;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    entity_6 = 30;            // Tag.BODY
    if(entity_5 < entity_6){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 61;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_5] = 'z'; // Tag.BUFWRITE_COND_UNSAFE
    entity_1[entity_3] = 's'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER