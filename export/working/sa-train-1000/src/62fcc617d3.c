#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_7 = 13;                                       // Tag.BODY
    char entity_4[77];                                   // Tag.BODY
    for(entity_1 = 74; entity_1 < entity_7; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_1] = 'L';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER