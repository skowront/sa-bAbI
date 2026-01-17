#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    entity_8 = 80;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_0[12];                                   // Tag.BODY
    entity_0[entity_8] = 'W';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_6[11];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_5 = 78;                                       // Tag.BODY
    for(entity_1 = 20; entity_1 < entity_5; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_1] = 'M';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER