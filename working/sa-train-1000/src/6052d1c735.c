#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_4[74];        // Tag.BODY
    int entity_2;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_2 = 84;            // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    entity_6 = 55;            // Tag.BODY
    char entity_9[46];        // Tag.BODY
    if(entity_5 < entity_2){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 78;            // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_5] = 'P'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_3[21];        // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_4[entity_6] = 'O'; // Tag.BUFWRITE_TAUT_SAFE
    entity_1 = 39;            // Tag.BODY
    entity_3[entity_1] = 'Z'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER