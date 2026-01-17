#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_6[49];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_1[33];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    entity_2 = 40;                                       // Tag.BODY
    entity_3 = 44;                                       // Tag.BODY
    if (entity_5 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 92;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_0 = 67; entity_0 < entity_5; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_0] = 'f';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_7;                                        // Tag.BODY
    entity_7 = 92;                                       // Tag.BODY
    char entity_9[14];                                   // Tag.BODY
    entity_9[entity_7] = 'F';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1[entity_3] = 'd';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER