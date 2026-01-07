#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_5[74];        // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_8 = 81;            // Tag.BODY
    entity_0 = 42;            // Tag.BODY
    char entity_4[57];        // Tag.BODY
    entity_1 = 73;            // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    char entity_2[4];         // Tag.BODY
    entity_4[entity_0] = 'w'; // Tag.BUFWRITE_TAUT_SAFE
    if(entity_6 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 14;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_8] = 'n'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5[entity_6] = '2'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER