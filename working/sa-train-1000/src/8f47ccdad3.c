#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    char entity_6[71];        // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_8[25];        // Tag.BODY
    entity_7 = 65;            // Tag.BODY
    entity_2 = 88;            // Tag.BODY
    if(entity_4 < entity_2){  // Tag.BODY
    entity_6[entity_7] = 'n'; // Tag.BUFWRITE_TAUT_SAFE
    } else {                  // Tag.BODY
    entity_4 = 74;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_4] = 'A'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER