#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_8[56];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_9[48];                                   // Tag.BODY
    entity_3 = 50;                                       // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_6 = 22;                                       // Tag.BODY
    int entity_0;                                        // Tag.BODY
    if (entity_2 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 37;                                       // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_6] = 'M';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_0 = 42; entity_0 < entity_2; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_0] = 's';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER