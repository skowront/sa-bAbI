#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = 32;            // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    char entity_8[10];        // Tag.BODY
    if(entity_2 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 65;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_2] = 'C'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER