#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_7[33];        // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_6[96];        // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    entity_2 = 77;            // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 51;            // Tag.BODY
    entity_6[entity_3] = 'f'; // Tag.BUFWRITE_TAUT_SAFE
    if(entity_5 < entity_2){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 58;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_5] = 'x'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER