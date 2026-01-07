#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_3[25];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_0 = 88;                                       // Tag.BODY
    char entity_2[45];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_1 = 91;                                       // Tag.BODY
    entity_3[entity_0] = 'T';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_4 = rand();                                   // Tag.BODY
    if (entity_4 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 62;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 54; entity_8 < entity_4; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_8] = 'l';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER