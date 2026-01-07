#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    char entity_1[34];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_7[99];                                   // Tag.BODY
    entity_5 = 99;                                       // Tag.BODY
    entity_2 = 59;                                       // Tag.BODY
    if (entity_3 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 98;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 37; entity_4 < entity_3; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_4] = 'e';                            // Tag.BUFWRITE_COND_SAFE
    entity_1[entity_2] = 'K';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER