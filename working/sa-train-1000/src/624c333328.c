#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    char entity_6[6];                                    // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_1 = 4;                                        // Tag.BODY
    for(entity_8 = 89; entity_8 < entity_1; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_8] = '2';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER