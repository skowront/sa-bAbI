#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    char entity_4[55];                                   // Tag.BODY
    entity_0 = 68;                                       // Tag.BODY
    int entity_8;                                        // Tag.BODY
    for(entity_8 = 76; entity_8 < entity_0; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_6[95];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_9 = 71;                                       // Tag.BODY
    entity_4[entity_8] = 'q';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_6[entity_9] = '0';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER