#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_0;             // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_1[69];        // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    entity_0 = 97;            // Tag.BODY
    char entity_6[88];        // Tag.BODY
    entity_7 = 67;            // Tag.BODY
    if(entity_4 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 67;            // Tag.BODY
    }                         // Tag.BODY
    char entity_8[1];         // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 3;             // Tag.BODY
    entity_8[entity_3] = '0'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1[entity_4] = 'U'; // Tag.BUFWRITE_COND_UNSAFE
    entity_6[entity_7] = 'J'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER