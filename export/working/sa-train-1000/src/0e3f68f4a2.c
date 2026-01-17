#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_9;             // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_4[18];        // Tag.BODY
    entity_1 = 16;            // Tag.BODY
    char entity_7[29];        // Tag.BODY
    entity_0 = 86;            // Tag.BODY
    entity_9 = 75;            // Tag.BODY
    entity_4[entity_9] = 'o'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2 = rand();        // Tag.BODY
    char entity_8[85];        // Tag.BODY
    if(entity_2 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 69;            // Tag.BODY
    entity_7[entity_0] = '2'; // Tag.BUFWRITE_TAUT_UNSAFE
    }                         // Tag.BODY
    entity_8[entity_2] = 'e'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER