#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_1[77];        // Tag.BODY
    char entity_3[85];        // Tag.BODY
    int entity_9;             // Tag.BODY
    char entity_7[96];        // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = 22;            // Tag.BODY
    int entity_2;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_9 = 37;            // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    entity_2 = 37;            // Tag.BODY
    if(entity_8 < entity_9){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 45;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_8] = 'v'; // Tag.BUFWRITE_COND_SAFE
    entity_3[entity_6] = 'b'; // Tag.BUFWRITE_TAUT_SAFE
    entity_1[entity_2] = '8'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER