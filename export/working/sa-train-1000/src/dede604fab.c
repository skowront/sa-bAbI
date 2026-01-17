#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    char entity_0[1];                                    // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_7[87];                                   // Tag.BODY
    entity_3 = 4;                                        // Tag.BODY
    entity_7[entity_3] = 't';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_2 = 50;                                       // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    if (entity_6 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 39;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 67; entity_4 < entity_6; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_4] = 'V';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER