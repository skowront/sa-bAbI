#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_2[2];         // Tag.BODY
    entity_5 = 20;            // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    if(entity_6 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 63;            // Tag.BODY
    }                         // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = 23;            // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_3[61];        // Tag.BODY
    char entity_4[15];        // Tag.BODY
    entity_1 = 47;            // Tag.BODY
    entity_2[entity_6] = 'y'; // Tag.BUFWRITE_COND_UNSAFE
    entity_3[entity_1] = 'A'; // Tag.BUFWRITE_TAUT_SAFE
    entity_4[entity_8] = 'K'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER