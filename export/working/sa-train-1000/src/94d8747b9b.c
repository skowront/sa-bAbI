#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = 92;            // Tag.BODY
    entity_5 = 42;            // Tag.BODY
    char entity_1[26];        // Tag.BODY
    if(entity_7 < entity_5){  // Tag.BODY
    entity_7 = 39;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 69;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_7] = '7'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER