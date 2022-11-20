#include <stdio.h>
#include <assert.h>
#include "color_name_map.h"
#include "color_code_checker.h"
#include "color_code_document.h"

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    createColorCodeDocument();
    return 0;
}
