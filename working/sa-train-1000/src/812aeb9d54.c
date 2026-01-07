#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    char entity_6[36];        // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_9 = rand();        // Tag.BODY
    entity_4 = 52;            // Tag.BODY
    if(entity_9 < entity_4){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 78;            // Tag.BODY
    }                         // Tag.BODY
    int entity_7;             // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_1[36];        // Tag.BODY
    entity_2 = 84;            // Tag.BODY
    entity_6[entity_9] = 'D'; // Tag.BUFWRITE_COND_UNSAFE
    entity_7 = 76;            // Tag.BODY
    char entity_3[21];        // Tag.BODY
    entity_1[entity_7] = 'P'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3[entity_2] = '1'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER