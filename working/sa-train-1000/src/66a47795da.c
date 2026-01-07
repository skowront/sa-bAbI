#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_8[86];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_2 = 12;                                       // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    if (entity_7 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 29;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 99; entity_5 < entity_7; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_5] = 'G';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER