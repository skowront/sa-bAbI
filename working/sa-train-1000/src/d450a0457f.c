#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    char entity_3[13];        // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_2[80];        // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    entity_1 = 17;            // Tag.BODY
    entity_4 = 68;            // Tag.BODY
    if(entity_0 < entity_4){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2[entity_1] = 'a'; // Tag.BUFWRITE_TAUT_SAFE
    entity_0 = 52;            // Tag.BODY
    }                         // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_3[entity_0] = 'Z'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_6[17];        // Tag.BODY
    entity_7 = 71;            // Tag.BODY
    entity_6[entity_7] = 'G'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER