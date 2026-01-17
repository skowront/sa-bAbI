#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    char entity_6[44];        // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = 3;             // Tag.BODY
    if(entity_5 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 2;             // Tag.BODY
    }                         // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_0[10];        // Tag.BODY
    entity_7 = 6;             // Tag.BODY
    entity_6[entity_5] = 'b'; // Tag.BUFWRITE_COND_SAFE
    entity_0[entity_7] = 'y'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER