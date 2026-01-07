#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_9[13];        // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_6 = 74;            // Tag.BODY
    entity_5 = 45;            // Tag.BODY
    if(entity_6 < entity_5){  // Tag.BODY
    entity_6 = 80;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 83;            // Tag.BODY
    }                         // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 40;            // Tag.BODY
    entity_9[entity_6] = 'Z'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_3[45];        // Tag.BODY
    entity_3[entity_0] = 'c'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER