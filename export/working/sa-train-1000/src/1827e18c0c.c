#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_4[15];        // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    entity_1 = 56;            // Tag.BODY
    if(entity_2 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 10;            // Tag.BODY
    }                         // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_0[78];        // Tag.BODY
    entity_7 = 9;             // Tag.BODY
    entity_4[entity_2] = '5'; // Tag.BUFWRITE_COND_UNSAFE
    entity_0[entity_7] = 'Q'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER