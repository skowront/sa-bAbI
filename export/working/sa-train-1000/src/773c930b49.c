#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_3[50];                                   // Tag.BODY
    entity_5 = 48;                                       // Tag.BODY
    for(entity_1 = 13; entity_1 < entity_5; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_1] = 'q';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER