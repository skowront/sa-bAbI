#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_9[17];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_1 = 44;                                       // Tag.BODY
    if (entity_7 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 78;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_0 = 24; entity_0 < entity_7; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_9[entity_0] = 'e';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_2[6];                                    // Tag.BODY
    entity_6 = 58;                                       // Tag.BODY
    entity_2[entity_6] = '9';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER