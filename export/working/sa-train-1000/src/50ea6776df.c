#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    entity_2 = 28;                                       // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_8[45];                                   // Tag.BODY
    for(entity_6 = 44; entity_6 < entity_2; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_6] = 'v';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER