#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_6[28];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    char entity_3[94];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_2 = 46;                                       // Tag.BODY
    entity_4 = 12;                                       // Tag.BODY
    if (entity_5 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 79;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 74; entity_1 < entity_5; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_4] = 'N';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_6[entity_1] = '2';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER