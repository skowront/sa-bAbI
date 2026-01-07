#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_3[26];        // Tag.BODY
    int entity_7;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = 29;            // Tag.BODY
    char entity_9[74];        // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    entity_7 = 56;            // Tag.BODY
    if(entity_2 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 65;            // Tag.BODY
    entity_3[entity_5] = 'M'; // Tag.BUFWRITE_TAUT_UNSAFE
    }                         // Tag.BODY
    entity_9[entity_2] = 'u'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER