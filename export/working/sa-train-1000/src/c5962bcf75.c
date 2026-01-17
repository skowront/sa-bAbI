#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_2[52];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_4[82];                                   // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    entity_5 = 54;                                       // Tag.BODY
    entity_3 = 19;                                       // Tag.BODY
    if (entity_7 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 28;                                       // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_3] = 'U';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_8 = 22; entity_8 < entity_7; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_8] = 'u';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER