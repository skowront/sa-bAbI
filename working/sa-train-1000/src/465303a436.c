#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_2 = 54;                                       // Tag.BODY
    char entity_5[14];                                   // Tag.BODY
    for(entity_6 = 18; entity_6 < entity_2; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_6] = 'V';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER