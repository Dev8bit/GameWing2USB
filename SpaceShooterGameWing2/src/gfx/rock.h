const int rockOffsets[] = {0, 380, 722, 1102, 1482, 1900, 2320, 2700, 3060, 3440, 3782, 4162, 4561, 4979, 5359, 5758, 6176, };
const short rockPointOffsets[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, };
const unsigned short rockRes[][2] = {{19, 20}, {19, 18}, {19, 20}, {20, 19}, {22, 19}, {20, 21}, {20, 19}, {18, 20}, {19, 20}, {18, 19}, {20, 19}, {21, 19}, {22, 19}, {20, 19}, {19, 21}, {19, 22}, };
const signed short rockPoints[][2] = {{10, 10}, {9, 9}, {9, 10}, {10, 9}, {11, 10}, {10, 11}, {10, 10}, {9, 10}, {9, 10}, {9, 9}, {9, 9}, {11, 9}, {11, 9}, {10, 10}, {10, 10}, {10, 11}, };
const unsigned short rockPixels[] = {
0, 0, 0, 0, 0, 0, 0, 0, 2184, 0, 6280, 34679, 22391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30583, 42871, 30310, 47240, 63351, 55159, 10103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10103, 39048, 63351, 63351, 63351, 63624, 63351, 63351, 42598, 6007, 0, 0, 0, 0, 0, 0, 0, 0, 22391, 55159, 63624, 63351, 63351, 63351, 63351, 63351, 63351, 63078, 50790, 21572, 0, 0, 0, 0, 0, 0, 22391, 63351, 63624, 63624, 63351, 63351, 63351, 63078, 63351, 63351, 63078, 63078, 50244, 4915, 0, 0, 0, 0, 18295, 55159, 63351, 63351, 63351, 63351, 63351, 63624, 63078, 63351, 63351, 63078, 63078, 62259, 49971, 17203, 0, 0, 18022, 55159, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63624, 63351, 63078, 62805, 62259, 61986, 21026, 0, 9830, 54886, 63078, 63078, 63078, 63078, 63078, 63351, 63351, 63351, 63351, 63351, 63351, 63078, 62532, 61986, 61986, 16930, 0, 5461, 58709, 62805, 62805, 62805, 63078, 63078, 63351, 63351, 63351, 63351, 63351, 63351, 63078, 62259, 61986, 57890, 8738, 0, 4915, 58163, 62532, 62532, 62805, 62805, 63078, 63078, 63078, 63351, 63351, 63078, 63078, 62532, 61986, 61986, 61986, 41506, 8738, 0, 41506, 62259, 62259, 62532, 62532, 62805, 63078, 63078, 63078, 63078, 62805, 62532, 62259, 61986, 61986, 61986, 61986, 21026, 0, 12834, 57890, 61986, 62259, 62259, 62532, 62805, 62805, 62805, 62805, 62532, 62259, 61986, 62259, 61986, 61986, 61986, 16930, 0, 0, 41506, 62259, 61986, 61986, 62259, 62259, 62532, 62532, 62259, 62259, 61986, 61986, 61986, 61986, 61986, 61986, 12834, 0, 0, 4642, 49698, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 53794, 4915, 0, 0, 0, 21026, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 21026, 0, 0, 0, 0, 8738, 57890, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 37410, 819, 0, 0, 0, 0, 8738, 57890, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 41506, 21026, 546, 0, 0, 0, 0, 0, 0, 21026, 53794, 61986, 61986, 53794, 29491, 25122, 41506, 41506, 37410, 4915, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8738, 41506, 61986, 21026, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4642, 21026, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18022, 22118, 5461, 10103, 6007, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26487, 59255, 63351, 59255, 59255, 46967, 25941, 13926, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22391, 42871, 63351, 63624, 63351, 63351, 63351, 63351, 63078, 58982, 42325, 5188, 0, 0, 0, 0, 0, 6007, 38775, 63351, 63351, 63351, 63624, 63624, 63351, 63351, 63351, 63351, 63351, 63078, 42052, 4915, 0, 0, 0, 6007, 42871, 63351, 63351, 63351, 63351, 63351, 63624, 63351, 63351, 63351, 63351, 63351, 63078, 62532, 17203, 0, 0, 0, 26214, 63078, 63078, 63351, 63351, 63351, 63351, 63351, 63078, 63078, 63078, 63078, 63078, 63078, 62532, 45875, 4915, 0, 0, 38229, 62805, 62805, 63078, 63351, 63351, 63351, 62532, 61986, 62259, 63078, 63078, 63078, 62805, 62532, 62259, 49698, 21026, 0, 37683, 62532, 62532, 62805, 63078, 63078, 63078, 62532, 61986, 62259, 62805, 63078, 63078, 62805, 62532, 61986, 61986, 41506, 4915, 37410, 62259, 62532, 62805, 62805, 63078, 63078, 62805, 62259, 62805, 63078, 63351, 63078, 62805, 62532, 61986, 57890, 13107, 0, 25122, 61986, 61986, 62532, 62805, 63078, 63078, 62805, 62805, 63078, 63351, 63351, 62805, 62805, 62259, 61986, 25122, 0, 0, 16930, 61986, 61986, 62532, 62805, 62805, 62805, 63078, 63078, 63078, 63351, 63078, 62805, 62259, 61986, 37410, 0, 0, 0, 4642, 57890, 61986, 62259, 62805, 62805, 62805, 63078, 63078, 63078, 62805, 62532, 62259, 61986, 61986, 33314, 0, 0, 0, 4915, 57890, 61986, 62259, 62532, 62532, 62805, 62805, 62805, 62532, 62259, 62259, 61986, 61986, 61986, 53794, 8738, 0, 0, 0, 41506, 61986, 61986, 61986, 62259, 62532, 62532, 62259, 62259, 61986, 61986, 61986, 61986, 61986, 61986, 16930, 0, 0, 0, 4915, 41506, 61986, 61986, 61986, 62259, 62259, 61986, 61986, 61986, 62259, 61986, 61986, 61986, 41506, 4642, 0, 0, 0, 0, 4642, 45602, 41506, 57890, 61986, 61986, 57890, 57890, 61986, 61986, 61986, 57890, 25122, 819, 0, 0, 0, 0, 0, 0, 4642, 0, 29218, 61986, 37410, 8738, 8738, 37410, 49698, 41506, 12834, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4642, 16930, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10103, 22391, 26487, 5734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6007, 39048, 59255, 63351, 63351, 42598, 5461, 0, 0, 0, 0, 0, 0, 0, 0, 6280, 26487, 34679, 26487, 38775, 63351, 63351, 63351, 63351, 63351, 42325, 5461, 0, 0, 0, 0, 0, 0, 10103, 42871, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63078, 42325, 5188, 0, 0, 0, 0, 22391, 59255, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63078, 25941, 0, 0, 0, 0, 42598, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63078, 63078, 63351, 63078, 58709, 13107, 0, 0, 9011, 58709, 63078, 63351, 63351, 63078, 63078, 63351, 63351, 63351, 63351, 63078, 63078, 63078, 63078, 62532, 33587, 0, 0, 21026, 62532, 62805, 63078, 63351, 63351, 63351, 63351, 63351, 63351, 63078, 63351, 63078, 62805, 62532, 62259, 45602, 0, 0, 25122, 62259, 62805, 63078, 63078, 63351, 63351, 63351, 63351, 63078, 63078, 63351, 63078, 62532, 62259, 61986, 41506, 0, 0, 29218, 62259, 62805, 62805, 62805, 62805, 62805, 62805, 62805, 63078, 63078, 63078, 62532, 62259, 61986, 61986, 41506, 0, 0, 21026, 62259, 62805, 62532, 62259, 61986, 61986, 61986, 61986, 62532, 62805, 62259, 61986, 61986, 61986, 61986, 57890, 8738, 0, 0, 45875, 62805, 62805, 62532, 62259, 61986, 61986, 62259, 62532, 62532, 61986, 61986, 61986, 61986, 61986, 61986, 37410, 1092, 0, 42052, 62805, 62532, 62532, 62532, 62259, 62532, 62805, 63078, 62532, 61986, 61986, 61986, 61986, 53794, 41506, 21299, 0, 4642, 54067, 62532, 62532, 62532, 62805, 62805, 63078, 63078, 63078, 62532, 61986, 62259, 61986, 45602, 8738, 0, 0, 0, 0, 49698, 62259, 62532, 62805, 62805, 62805, 62805, 62805, 62532, 62259, 61986, 61986, 61986, 21026, 0, 0, 0, 0, 0, 21026, 57890, 62259, 62259, 62259, 62259, 62259, 62259, 62259, 61986, 61986, 61986, 53794, 4642, 0, 0, 0, 0, 0, 0, 29218, 61986, 61986, 61986, 61986, 62259, 61986, 61986, 61986, 61986, 61986, 33314, 0, 0, 0, 0, 0, 0, 0, 12834, 53794, 57890, 57890, 57890, 62259, 61986, 61986, 61986, 61986, 61986, 16930, 0, 0, 0, 0, 0, 0, 0, 0, 4642, 8738, 4642, 9011, 29218, 37410, 41506, 49698, 53794, 25122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10103, 22391, 30583, 22391, 819, 0, 10376, 22664, 22391, 18295, 0, 0, 0, 0, 0, 0, 0, 6007, 26487, 42871, 59255, 63351, 63351, 63351, 46967, 42871, 59528, 63351, 63351, 59255, 22118, 0, 0, 0, 0, 0, 0, 42871, 63351, 63351, 63351, 63351, 63351, 63351, 63078, 63351, 63351, 63351, 63351, 63351, 58709, 13380, 0, 0, 0, 0, 5461, 58982, 63351, 63351, 63351, 63351, 63351, 63351, 63078, 63078, 63078, 63351, 63351, 63351, 62805, 33860, 0, 0, 0, 0, 9284, 58982, 63351, 63078, 63078, 63351, 63351, 63351, 63078, 63078, 63351, 63351, 63351, 63351, 63078, 46148, 0, 0, 0, 0, 13653, 63078, 63351, 63078, 63078, 63078, 63351, 63351, 63351, 63078, 63078, 63078, 63351, 63078, 62805, 54067, 4642, 0, 0, 0, 18022, 63078, 63351, 63351, 63078, 63078, 63351, 63351, 63078, 62532, 62532, 62805, 63078, 63078, 62805, 62259, 21026, 0, 0, 5461, 42598, 63078, 63078, 63351, 63351, 63351, 63351, 63351, 63078, 62532, 62259, 63078, 63078, 63078, 62532, 62259, 49698, 4915, 0, 38229, 62805, 62805, 62805, 63078, 63078, 63078, 63078, 63078, 63078, 62532, 62532, 62805, 62805, 62532, 62259, 61986, 61986, 12834, 9284, 58709, 62805, 62259, 62259, 62532, 62805, 63078, 63078, 63078, 63078, 62532, 62259, 62532, 62259, 62259, 61986, 61986, 41506, 819, 4915, 58436, 62532, 62532, 61986, 61986, 62259, 62532, 63078, 63078, 62532, 62259, 62259, 61986, 61986, 61986, 61986, 61986, 21026, 0, 0, 46148, 62532, 62532, 62259, 62259, 62259, 62259, 62259, 62532, 62259, 61986, 61986, 61986, 61986, 61986, 61986, 53794, 4642, 0, 4642, 58163, 62532, 62805, 62805, 62805, 63078, 62532, 62259, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 37410, 0, 0, 8738, 61986, 62259, 62532, 62805, 63078, 62805, 62259, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 21026, 0, 0, 12834, 49698, 57890, 62259, 62259, 62532, 62259, 62259, 61986, 62259, 61986, 61986, 61986, 57890, 29218, 37410, 37410, 4915, 0, 0, 0, 0, 8738, 25122, 45602, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 57890, 25122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 21026, 57890, 61986, 61986, 61986, 61986, 53794, 21026, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21026, 57890, 61986, 57890, 37410, 8738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21026, 37410, 12834, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6280, 1365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42871, 51063, 42871, 42871, 42871, 38775, 18295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10103, 59255, 63351, 63351, 63351, 63351, 63351, 59255, 22118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22391, 63351, 63351, 63351, 63351, 63351, 63078, 63078, 58982, 38775, 43144, 30583, 10103, 0, 0, 0, 0, 0, 0, 0, 0, 5734, 46967, 63078, 63078, 63351, 63351, 63351, 63078, 63078, 63351, 63351, 63351, 63351, 55159, 22118, 0, 0, 0, 0, 0, 0, 18295, 51063, 63351, 63078, 63078, 63351, 63351, 63078, 62805, 62805, 63078, 63078, 63351, 63351, 63351, 58709, 17203, 0, 0, 0, 0, 30310, 59255, 63351, 63351, 63351, 63078, 63351, 63351, 63078, 63078, 62805, 63078, 63351, 63351, 63351, 63078, 62805, 37683, 0, 0, 0, 9557, 58709, 63078, 63078, 63078, 63351, 63351, 63351, 63078, 62805, 62805, 63078, 63351, 63351, 63351, 63351, 62805, 62532, 45875, 0, 0, 0, 21845, 62805, 62805, 63078, 63351, 63078, 63351, 63078, 62532, 62259, 62259, 62805, 63078, 63351, 63351, 63078, 62805, 62259, 57890, 4642, 0, 0, 25941, 62805, 62532, 62532, 63078, 63078, 63078, 63078, 62259, 61986, 62259, 62805, 63078, 63078, 63078, 62805, 62259, 61986, 61986, 25122, 0, 0, 42052, 62805, 62532, 62532, 63078, 63078, 63078, 62805, 62259, 62259, 62805, 63078, 63078, 63078, 62805, 62532, 61986, 61986, 61986, 41506, 0, 4642, 54067, 62805, 63078, 63078, 63078, 62805, 62532, 62532, 62259, 62259, 62532, 62805, 62805, 62532, 62532, 62259, 61986, 61986, 61986, 45602, 0, 0, 21026, 58709, 63078, 62805, 62259, 62259, 62259, 61986, 62259, 62259, 62259, 62259, 62259, 62259, 61986, 61986, 61986, 61986, 61986, 49698, 0, 0, 0, 49971, 62532, 62259, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 57890, 25122, 0, 0, 1092, 33314, 54067, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 53794, 21026, 0, 0, 0, 0, 0, 4642, 37410, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 45602, 8738, 0, 0, 0, 0, 0, 0, 0, 16930, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 53794, 13107, 0, 0, 0, 0, 0, 0, 0, 0, 8738, 53794, 57890, 61986, 61986, 53794, 49698, 41506, 29218, 53794, 41506, 29218, 12834, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4642, 8738, 12834, 12834, 4642, 0, 0, 0, 4642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6007, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22391, 51063, 38775, 14199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30583, 63351, 63351, 63351, 59255, 42871, 26214, 5734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26487, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 42598, 4915, 0, 0, 0, 0, 0, 0, 0, 22118, 42871, 46967, 63624, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63078, 21572, 0, 0, 0, 0, 0, 0, 1365, 46694, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63078, 63078, 63078, 63078, 50517, 6007, 0, 0, 0, 0, 0, 0, 30310, 63351, 63351, 63351, 63351, 63351, 63078, 63078, 62805, 63078, 63351, 63351, 63351, 42871, 6280, 0, 0, 0, 0, 0, 42598, 63351, 63351, 63351, 62805, 63078, 63078, 63078, 63078, 63078, 63078, 63351, 63351, 63351, 42598, 5461, 0, 0, 0, 30583, 63351, 63351, 63351, 62805, 61986, 62259, 62805, 63078, 63078, 63351, 63351, 63351, 63351, 63351, 63078, 42052, 4642, 0, 9830, 58982, 63078, 63078, 63078, 62532, 62259, 61986, 62532, 63078, 63078, 63351, 63351, 63351, 63351, 63078, 62532, 62259, 37410, 1092, 21572, 62805, 62805, 62805, 62805, 62805, 62805, 62805, 63078, 63351, 63351, 63351, 63351, 63351, 63078, 62805, 62259, 57890, 25122, 0, 41779, 62532, 62532, 62259, 62259, 62532, 62805, 63078, 63351, 63351, 63351, 63078, 62805, 62805, 62532, 62259, 61986, 41506, 0, 0, 21299, 58163, 62259, 61986, 61986, 61986, 62259, 62532, 62805, 62805, 62805, 62805, 62532, 62259, 61986, 61986, 61986, 41506, 0, 0, 0, 21026, 57890, 61986, 61986, 61986, 61986, 62259, 62532, 62532, 62532, 62259, 62259, 61986, 61986, 61986, 61986, 57890, 12834, 0, 0, 0, 33314, 61986, 61986, 61986, 61986, 61986, 62259, 62259, 62259, 61986, 61986, 62259, 61986, 61986, 61986, 61986, 29218, 0, 0, 0, 41506, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 62259, 61986, 61986, 61986, 61986, 21026, 0, 0, 1365, 25122, 53794, 61986, 62259, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 53794, 4915, 0, 0, 0, 0, 8738, 29218, 45602, 57890, 61986, 62259, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 53794, 25122, 0, 0, 0, 0, 0, 0, 0, 0, 12834, 33314, 49698, 61986, 61986, 61986, 61986, 54067, 41506, 21026, 4915, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4915, 12834, 25122, 37410, 21026, 4915, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10103, 22391, 30583, 34406, 5461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18022, 22391, 18295, 26487, 55159, 63351, 63351, 63351, 42598, 5734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9830, 58982, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 42598, 5461, 0, 0, 0, 0, 0, 18295, 22664, 22664, 34406, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63078, 42325, 4369, 0, 0, 0, 1365, 50790, 63351, 63624, 63351, 63351, 63351, 63351, 63351, 63351, 63078, 63078, 63351, 63351, 63078, 62532, 16930, 0, 0, 0, 0, 50790, 63078, 63351, 63351, 63078, 63351, 63351, 63351, 63351, 63078, 63351, 63351, 63351, 63351, 62532, 25122, 0, 0, 0, 0, 46421, 63078, 63078, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 62805, 33314, 0, 0, 0, 9011, 58436, 62805, 63078, 63078, 63351, 63351, 63351, 63351, 63351, 63351, 63624, 63351, 63351, 63351, 62805, 25395, 0, 0, 0, 4096, 50244, 62532, 62532, 62805, 63078, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63078, 63078, 62532, 45875, 4642, 0, 0, 0, 33587, 62259, 62259, 62532, 63078, 63078, 63078, 63351, 63078, 63078, 63078, 63078, 62805, 62532, 62259, 61986, 41506, 4915, 0, 0, 8738, 53794, 62259, 62532, 62805, 63078, 63078, 62805, 62805, 62805, 62532, 62532, 62532, 62259, 61986, 61986, 61986, 33314, 0, 0, 0, 45602, 61986, 62532, 62805, 62532, 62532, 62259, 62259, 62259, 61986, 61986, 62259, 62259, 61986, 61986, 61986, 57890, 13107, 0, 4915, 53794, 62259, 62532, 62532, 62259, 62259, 61986, 61986, 62259, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 33314, 0, 0, 41506, 62259, 62259, 62259, 62259, 61986, 61986, 61986, 62259, 62259, 61986, 61986, 61986, 61986, 61986, 61986, 57890, 29218, 0, 0, 4915, 41506, 62259, 61986, 61986, 61986, 61986, 62259, 62259, 62259, 61986, 61986, 61986, 61986, 61986, 41506, 12834, 0, 0, 0, 0, 4915, 41506, 61986, 61986, 61986, 61986, 62259, 62259, 61986, 61986, 61986, 61986, 61986, 53794, 4642, 0, 0, 0, 0, 0, 0, 4642, 33314, 57890, 61986, 61986, 61986, 61986, 61986, 61986, 57890, 49698, 57890, 37683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21026, 53794, 61986, 62259, 61986, 61986, 57890, 12834, 0, 4915, 4915, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4915, 12834, 25122, 33314, 29218, 16930, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6007, 4095, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42871, 46967, 26214, 18295, 42871, 38775, 26214, 18022, 13926, 5461, 0, 0, 0, 0, 0, 0, 0, 9830, 59255, 63351, 63351, 63351, 63624, 63351, 63351, 63078, 63351, 50790, 34133, 13380, 0, 0, 0, 0, 0, 22118, 63351, 63351, 63624, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 58709, 25668, 0, 0, 0, 6007, 46694, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63078, 63351, 63351, 63351, 63351, 50517, 5461, 0, 0, 26214, 63078, 63078, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63078, 62805, 25395, 0, 0, 38229, 62805, 63078, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63078, 62532, 62259, 53794, 4642, 0, 29491, 62805, 63078, 63078, 63351, 63078, 63078, 63351, 63351, 63351, 63078, 63078, 62532, 62259, 61986, 53794, 4642, 0, 30037, 63078, 63078, 63078, 63078, 62805, 62805, 62805, 63078, 63078, 63078, 62532, 62259, 61986, 61986, 37410, 0, 21845, 58982, 63078, 63078, 63078, 62805, 62805, 62805, 62805, 62805, 62805, 62805, 62259, 61986, 61986, 61986, 21026, 0, 21572, 62805, 62805, 62805, 62805, 62805, 62805, 62805, 62805, 62805, 62532, 62259, 61986, 61986, 61986, 53794, 4642, 0, 4915, 49971, 62805, 62805, 62805, 63078, 63078, 63078, 63078, 62805, 62259, 61986, 61986, 61986, 61986, 57890, 4915, 0, 0, 37683, 62532, 62805, 63078, 63078, 63078, 62805, 62805, 62532, 62259, 61986, 61986, 61986, 61986, 61986, 25122, 0, 0, 12834, 58163, 62532, 62805, 62805, 62805, 62805, 62532, 62259, 61986, 61986, 61986, 61986, 61986, 61986, 45602, 0, 0, 0, 41506, 61986, 62259, 62532, 62532, 62259, 62259, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 53794, 4915, 0, 0, 12834, 57890, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 53794, 4915, 0, 0, 0, 21026, 41506, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 57890, 12834, 0, 0, 0, 0, 1092, 33587, 45602, 57890, 62259, 61986, 61986, 61986, 62259, 49698, 37410, 21026, 8738, 819, 0, 0, 0, 0, 0, 0, 0, 21299, 54067, 41506, 25122, 29218, 25395, 4642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4915, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13926, 38502, 13653, 9830, 34679, 22391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9830, 46967, 63351, 59255, 58982, 63351, 59255, 22391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6007, 26487, 55159, 63624, 63351, 63351, 63351, 63351, 63351, 58982, 42598, 17476, 0, 0, 0, 0, 0, 0, 10103, 42598, 63351, 63351, 63351, 63351, 63351, 63624, 63351, 63351, 63078, 63078, 58709, 21572, 0, 0, 0, 0, 34406, 59255, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63624, 63078, 63078, 62805, 58436, 13653, 0, 0, 0, 46694, 63078, 63351, 63351, 63351, 63351, 63351, 63351, 63078, 63351, 63351, 63078, 62532, 62259, 62259, 38229, 0, 0, 0, 46694, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63078, 63078, 63078, 62532, 62259, 61986, 62259, 58163, 16930, 0, 0, 46421, 63078, 63351, 63351, 63351, 63351, 63351, 63351, 63078, 62805, 62532, 62259, 61986, 61986, 61986, 61986, 37410, 0, 0, 46148, 62805, 63351, 63351, 63078, 63078, 63078, 63078, 62532, 62259, 62259, 61986, 61986, 61986, 61986, 61986, 45602, 1365, 5461, 54340, 62532, 62805, 63078, 62532, 62259, 62259, 62259, 62259, 61986, 61986, 61986, 61986, 61986, 61986, 57890, 25122, 0, 4915, 54340, 62259, 62532, 62532, 62259, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 41506, 0, 0, 5188, 54340, 62259, 62259, 62259, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 62259, 61986, 53794, 13107, 0, 0, 0, 37683, 62259, 61986, 61986, 61986, 62259, 62259, 61986, 61986, 61986, 62259, 62259, 62259, 61986, 21026, 0, 0, 0, 0, 16930, 57890, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 62259, 62532, 62259, 53794, 4642, 0, 0, 0, 0, 0, 21026, 57890, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 62259, 62259, 61986, 49698, 0, 0, 0, 0, 0, 0, 0, 12834, 41779, 62259, 61986, 61986, 61986, 62259, 61986, 61986, 61986, 61986, 41506, 0, 0, 0, 0, 0, 0, 0, 0, 12834, 53794, 57890, 57890, 53794, 58163, 61986, 61986, 61986, 61986, 21026, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4915, 9011, 4642, 4915, 4642, 21026, 61986, 61986, 41506, 4915, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1365, 29491, 21026, 819, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14199, 10103, 5734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9830, 34406, 26214, 18022, 42871, 59528, 59528, 59255, 51063, 34406, 9830, 0, 0, 0, 0, 0, 0, 0, 42598, 63351, 63351, 63351, 63351, 63624, 63624, 63624, 63351, 63351, 55159, 22391, 1092, 0, 0, 0, 0, 10103, 59255, 63351, 63624, 63351, 63351, 63351, 63351, 63624, 63351, 63351, 63351, 63351, 46421, 17476, 0, 0, 0, 13926, 63078, 63351, 63624, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63078, 63078, 62805, 58163, 8738, 0, 0, 5188, 54886, 63078, 63351, 63078, 63078, 63078, 63078, 63078, 62805, 62805, 62805, 62532, 62259, 61986, 12834, 0, 22118, 46421, 63078, 63078, 63078, 63078, 63078, 63078, 62805, 62805, 62532, 62532, 62259, 61986, 61986, 61986, 16930, 10103, 58982, 63078, 62805, 62805, 62805, 62805, 62805, 62805, 62532, 62259, 61986, 61986, 61986, 61986, 61986, 57890, 8738, 26214, 63078, 62805, 62532, 62532, 62805, 62805, 62805, 62805, 62259, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 16930, 38229, 62805, 62532, 62259, 61986, 62259, 62805, 62805, 62805, 62259, 61986, 62259, 62259, 62259, 61986, 61986, 61986, 33314, 25395, 62259, 62259, 61986, 61986, 61986, 62532, 62805, 62532, 61986, 61986, 62532, 62532, 62259, 61986, 61986, 61986, 33314, 13107, 61986, 61986, 62259, 62259, 62259, 62532, 62532, 62259, 61986, 62259, 62805, 62805, 62259, 61986, 61986, 61986, 21026, 0, 37410, 57890, 62259, 61986, 62259, 62259, 62259, 61986, 62259, 62805, 62805, 62805, 62259, 61986, 61986, 53794, 4642, 0, 0, 21026, 49698, 61986, 61986, 61986, 62259, 62259, 62259, 62532, 62532, 62259, 61986, 61986, 53794, 16930, 0, 0, 0, 0, 4642, 41506, 61986, 61986, 62259, 61986, 62259, 61986, 62259, 62259, 61986, 45875, 12834, 0, 0, 0, 0, 0, 0, 8738, 57890, 61986, 61986, 61986, 61986, 61986, 61986, 57890, 37410, 8738, 0, 0, 0, 0, 0, 0, 0, 0, 25122, 29218, 53794, 61986, 61986, 61986, 61986, 21026, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29218, 61986, 54067, 41506, 41506, 4642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8738, 21026, 4915, 0, 1092, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14199, 26487, 14199, 6007, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5734, 51063, 63624, 63351, 55159, 38775, 38775, 26214, 13926, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22118, 63351, 63351, 63351, 63351, 63351, 63351, 63078, 58982, 30037, 4915, 0, 0, 0, 0, 0, 0, 6280, 26487, 34679, 51063, 63351, 63351, 63351, 63351, 63078, 63078, 63078, 63078, 62805, 42052, 13380, 0, 0, 0, 0, 10103, 42871, 63351, 63351, 63351, 63078, 63078, 63351, 63351, 63078, 63078, 63078, 62805, 62259, 62532, 58709, 21572, 0, 0, 0, 42871, 63351, 63351, 63078, 63078, 63078, 63078, 63351, 63351, 63078, 63078, 62805, 62532, 61986, 62532, 62805, 58163, 12834, 0, 13380, 63078, 63078, 63351, 63078, 63078, 63078, 63078, 63078, 63078, 63078, 62805, 62532, 61986, 61986, 62259, 62259, 61986, 37410, 0, 13380, 62805, 63078, 63078, 63351, 63078, 63078, 63078, 63078, 63078, 62805, 62259, 61986, 61986, 61986, 61986, 61986, 61986, 41506, 0, 13107, 62259, 62532, 62805, 63078, 63078, 63078, 63078, 63078, 62532, 61986, 61986, 62259, 62532, 62259, 61986, 61986, 61986, 21026, 0, 12834, 61986, 61986, 62532, 63078, 63078, 63078, 63078, 62805, 61986, 61986, 61986, 62532, 62532, 62259, 61986, 61986, 37410, 819, 0, 21026, 61986, 61986, 62259, 62259, 62532, 62532, 62805, 63078, 62259, 62259, 62532, 62805, 62532, 62259, 61986, 45602, 4642, 0, 0, 546, 29218, 61986, 61986, 61986, 61986, 61986, 62532, 62805, 62805, 62532, 62532, 62805, 62259, 61986, 61986, 25122, 0, 0, 0, 0, 21026, 62259, 62259, 62259, 61986, 61986, 62259, 62532, 62532, 62259, 62259, 62259, 61986, 61986, 61986, 33314, 0, 0, 0, 0, 21026, 61986, 62259, 62259, 61986, 61986, 61986, 62259, 62259, 62259, 61986, 61986, 61986, 61986, 61986, 21026, 0, 0, 0, 0, 12834, 57890, 61986, 61986, 61986, 61986, 61986, 61986, 62259, 61986, 61986, 61986, 61986, 61986, 41506, 819, 0, 0, 0, 0, 0, 12834, 41506, 61986, 61986, 61986, 62259, 61986, 61986, 61986, 61986, 61986, 62259, 45602, 8738, 0, 0, 0, 0, 0, 0, 0, 4915, 21026, 37410, 41506, 57890, 61986, 61986, 61986, 54067, 41506, 21026, 4915, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21026, 45602, 29218, 21026, 4642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1092, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18022, 42871, 30583, 5734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10103, 22391, 22391, 9830, 13926, 55159, 63351, 63351, 50790, 30310, 18022, 5461, 0, 0, 0, 0, 0, 0, 0, 9830, 30583, 59255, 63351, 63351, 59255, 59255, 63351, 63351, 63351, 63351, 63078, 63078, 50517, 21572, 0, 0, 0, 0, 0, 22118, 54886, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63078, 63078, 63078, 62805, 62532, 50244, 5461, 0, 0, 0, 9557, 58982, 63078, 63078, 63351, 63351, 63351, 63624, 63351, 63351, 63078, 63078, 63351, 63078, 62805, 62532, 62259, 13107, 0, 0, 0, 9830, 58982, 63078, 63078, 63078, 63351, 63351, 63351, 63351, 63351, 63078, 63078, 63078, 63078, 62805, 62532, 62259, 33314, 0, 0, 0, 25941, 62805, 63078, 62805, 62805, 63078, 63078, 63351, 63351, 63351, 63078, 63078, 63078, 62532, 62259, 62259, 61986, 53794, 4642, 0, 0, 38229, 63078, 63078, 62805, 62532, 62259, 62805, 63078, 63078, 63078, 63078, 63078, 62259, 62259, 61986, 61986, 61986, 61986, 13107, 0, 0, 42052, 62805, 63078, 62805, 62805, 62259, 62259, 62532, 63078, 63078, 63078, 62805, 61986, 61986, 61986, 61986, 61986, 61986, 25122, 0, 9011, 58436, 62532, 63078, 63078, 63078, 63078, 62532, 62532, 63078, 63078, 63078, 62259, 61986, 61986, 61986, 61986, 61986, 61986, 37410, 0, 41506, 62259, 62532, 63078, 63078, 63351, 63078, 63078, 62805, 62805, 63078, 62805, 62532, 62259, 61986, 61986, 61986, 61986, 61986, 37410, 8738, 57890, 62259, 62532, 62805, 62532, 63078, 63078, 63078, 62805, 62805, 62805, 62805, 62532, 62259, 61986, 61986, 61986, 61986, 45875, 9011, 0, 16930, 45602, 62259, 62259, 62259, 62259, 62805, 62805, 62805, 62805, 62532, 62259, 62259, 61986, 61986, 61986, 61986, 41506, 9011, 0, 0, 0, 9011, 53794, 61986, 61986, 61986, 62259, 62259, 62259, 62259, 62259, 61986, 61986, 61986, 61986, 57890, 21026, 819, 0, 0, 0, 0, 0, 25122, 57890, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 37410, 0, 0, 0, 0, 0, 0, 0, 0, 13107, 25395, 21026, 45602, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 57890, 16930, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16930, 53794, 61986, 61986, 61986, 61986, 61986, 53794, 16930, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8738, 29218, 49698, 53794, 41506, 21026, 4915, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9830, 9830, 9830, 13926, 22391, 18295, 5734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9830, 55159, 59255, 59255, 63351, 63351, 63351, 58982, 34406, 21572, 22118, 22118, 13926, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10103, 59255, 63624, 63351, 63351, 63351, 63351, 63351, 63351, 63078, 63078, 63078, 54886, 9830, 0, 0, 0, 0, 0, 0, 0, 0, 38775, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63078, 63078, 63078, 42598, 9557, 0, 0, 0, 0, 0, 13380, 30310, 59255, 63351, 63351, 63351, 63351, 63078, 63351, 63351, 63351, 63351, 62805, 62805, 62805, 62805, 54340, 21299, 0, 0, 0, 0, 42598, 63351, 63351, 63351, 63351, 63351, 63351, 63078, 63078, 63351, 63351, 63078, 62532, 62805, 62805, 62532, 62259, 57890, 21026, 0, 0, 26214, 63078, 63351, 63351, 63351, 63351, 63351, 63078, 63078, 63078, 63078, 63078, 63078, 62805, 62532, 62532, 62532, 61986, 61986, 45602, 0, 25941, 62805, 63078, 63078, 63078, 63351, 63351, 63351, 63078, 63078, 63078, 63078, 62805, 63078, 63078, 62805, 62532, 62259, 61986, 61986, 41506, 0, 4369, 50244, 62805, 63078, 63078, 63351, 63351, 63351, 63351, 63351, 63351, 63078, 63078, 63078, 62805, 62805, 62532, 62259, 61986, 61986, 37410, 0, 0, 29218, 62532, 62805, 62805, 62805, 62805, 63078, 63351, 63351, 63351, 63351, 63078, 63078, 63078, 62805, 62532, 62259, 61986, 57890, 17203, 0, 0, 16930, 62259, 62259, 62259, 62259, 62259, 62805, 63078, 63351, 63351, 63078, 63078, 63078, 62805, 62805, 62259, 61986, 61986, 37410, 0, 0, 0, 8738, 57890, 61986, 61986, 61986, 61986, 62259, 62805, 63078, 63078, 63078, 62805, 62805, 62532, 62259, 61986, 61986, 61986, 21026, 0, 0, 0, 0, 21026, 49698, 61986, 61986, 61986, 61986, 62259, 62532, 62532, 62259, 62532, 62532, 62259, 61986, 61986, 61986, 61986, 12834, 0, 0, 0, 0, 0, 4642, 37410, 61986, 61986, 61986, 61986, 61986, 62259, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 33314, 546, 0, 0, 0, 0, 0, 0, 4642, 45602, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 41506, 16930, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21026, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 53794, 25122, 16930, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4642, 49698, 61986, 61986, 61986, 61986, 61986, 53794, 12834, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17203, 37410, 41506, 45602, 49698, 33314, 4915, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10103, 34679, 13926, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2184, 42871, 63351, 59255, 42598, 25941, 9557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30583, 30310, 30310, 38775, 63351, 63624, 63351, 63351, 63351, 55159, 22118, 4096, 0, 0, 0, 0, 0, 0, 0, 10103, 59255, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63078, 42325, 4642, 0, 0, 0, 0, 0, 0, 22118, 63351, 63351, 63624, 63351, 63351, 63351, 63351, 63351, 63351, 63351, 63078, 62805, 37956, 9284, 0, 0, 0, 0, 5734, 51063, 63351, 63351, 63624, 63351, 63351, 63078, 63351, 63351, 63351, 63078, 63078, 62805, 62532, 54340, 17476, 0, 0, 0, 25941, 63078, 63351, 63351, 63351, 63351, 63351, 63078, 63078, 63078, 63078, 62805, 63078, 62805, 62532, 62532, 42052, 0, 0, 0, 42325, 63078, 63078, 63078, 63078, 63351, 63351, 63351, 63078, 63078, 63078, 63078, 63078, 63078, 62532, 62532, 58163, 17203, 0, 21026, 58436, 62805, 63078, 63078, 63078, 63078, 63078, 63078, 62805, 62805, 62805, 63078, 63078, 63078, 62805, 62532, 61986, 45602, 546, 29218, 62259, 62259, 62532, 62532, 62259, 62532, 62805, 62805, 62805, 62805, 62805, 62805, 62805, 62805, 62805, 62532, 61986, 61986, 12834, 8738, 53794, 61986, 62259, 62259, 61986, 61986, 62259, 62259, 62805, 62805, 63078, 63078, 62805, 62805, 62532, 62259, 61986, 61986, 16930, 0, 25122, 61986, 62259, 61986, 61986, 61986, 61986, 62259, 62805, 63078, 63078, 63078, 63078, 62805, 62259, 61986, 61986, 45602, 4642, 0, 8738, 57890, 61986, 61986, 61986, 61986, 61986, 62259, 63078, 63078, 63078, 63078, 62805, 62532, 62259, 61986, 61986, 25122, 0, 0, 8738, 57890, 61986, 61986, 61986, 61986, 61986, 62532, 62805, 63078, 62805, 62805, 62532, 62259, 62259, 57890, 37410, 9011, 0, 0, 8738, 57890, 61986, 61986, 61986, 61986, 61986, 61986, 62259, 62532, 62532, 62532, 62259, 62259, 61986, 25122, 0, 0, 0, 0, 8738, 57890, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 62259, 61986, 62259, 61986, 61986, 16930, 0, 0, 0, 0, 0, 17203, 45602, 61986, 61986, 61986, 61986, 61986, 61986, 45875, 49698, 61986, 61986, 61986, 61986, 12834, 0, 0, 0, 0, 0, 0, 4642, 21026, 37410, 53794, 53794, 41506, 21026, 0, 4915, 29218, 41506, 49698, 49971, 4915, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4915, 4642, 0, 0, 0, 0, 0, 0, 0, 4642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18295, 10103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5461, 26214, 30310, 30583, 59255, 55159, 34406, 5461, 22391, 42871, 22391, 0, 0, 0, 0, 0, 0, 0, 0, 9830, 58982, 63078, 63351, 63624, 63351, 63351, 51063, 63351, 63351, 58982, 21845, 0, 0, 0, 0, 0, 0, 0, 9830, 58982, 63351, 63351, 63351, 63351, 63624, 63351, 63351, 63078, 63078, 58709, 21572, 0, 0, 0, 0, 5734, 22118, 38502, 63078, 63351, 63351, 63351, 63351, 63351, 63078, 63078, 63078, 63078, 62805, 58709, 21572, 0, 0, 0, 38502, 63078, 63078, 63351, 63351, 63351, 63078, 63078, 63351, 63078, 63078, 62805, 62805, 62805, 63078, 50517, 5188, 0, 0, 38502, 63078, 63078, 63351, 63351, 63078, 63078, 63078, 63078, 63078, 62805, 62532, 62805, 62805, 62805, 62532, 33587, 0, 0, 25941, 62805, 62805, 63078, 63078, 63078, 63078, 62805, 62805, 62805, 62532, 62532, 62532, 62805, 62532, 62259, 41506, 0, 0, 29764, 62805, 62532, 62532, 62805, 62805, 62805, 62805, 62805, 62805, 62532, 62259, 62259, 62259, 62259, 62259, 45602, 0, 9284, 58436, 62532, 62259, 62259, 62259, 62532, 62532, 62532, 62532, 62532, 62259, 61986, 61986, 61986, 61986, 61986, 57890, 16930, 25668, 62532, 62805, 62259, 61986, 62259, 62259, 61986, 61986, 62259, 62259, 62259, 61986, 61986, 61986, 62259, 61986, 61986, 25122, 41779, 62532, 62532, 62532, 62259, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 62259, 61986, 61986, 21026, 37683, 62532, 62532, 62532, 62259, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 17203, 4642, 41779, 62259, 62259, 62259, 61986, 61986, 61986, 61986, 62259, 62259, 61986, 61986, 62259, 61986, 61986, 62259, 41506, 819, 0, 12834, 53794, 61986, 61986, 61986, 61986, 61986, 61986, 62532, 62532, 62259, 62259, 61986, 61986, 61986, 53794, 9011, 0, 0, 0, 9011, 41506, 61986, 61986, 61986, 61986, 61986, 62532, 62532, 62532, 62259, 61986, 61986, 61986, 57890, 4642, 0, 0, 0, 0, 4642, 21026, 25122, 33314, 37410, 53794, 61986, 62259, 62259, 61986, 61986, 61986, 58163, 37410, 4915, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9011, 41506, 61986, 61986, 61986, 61986, 57890, 12834, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4642, 33314, 57890, 61986, 61986, 25122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16930, 45602, 45602, 4642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4915, 4915, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30583, 18295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10376, 59255, 63351, 42871, 22391, 6007, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30583, 63351, 63351, 63351, 63351, 55159, 22391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18022, 59255, 63351, 63351, 63351, 63351, 63351, 58982, 21845, 0, 0, 0, 0, 0, 0, 0, 0, 6007, 42871, 59255, 63624, 63351, 63351, 63624, 63351, 63351, 63078, 58709, 13107, 0, 0, 0, 0, 0, 0, 0, 26487, 63624, 63351, 63351, 63624, 63351, 63351, 63624, 63351, 63078, 62805, 54613, 42325, 25941, 1092, 0, 0, 0, 9557, 54886, 63351, 63351, 63351, 63624, 63351, 63351, 63351, 63351, 63078, 63078, 63078, 62805, 62805, 21299, 0, 0, 9830, 42598, 63078, 63078, 63351, 63351, 63351, 63351, 63351, 63078, 63078, 63078, 63078, 62805, 62532, 62532, 37410, 0, 10103, 54886, 63351, 63078, 63078, 63078, 63078, 63351, 63351, 63078, 63078, 62805, 62805, 62532, 62532, 62259, 62259, 53794, 4642, 25941, 63078, 63078, 63078, 62805, 63078, 63078, 63078, 63078, 63078, 62805, 62259, 62259, 61986, 61986, 61986, 61986, 61986, 21026, 42325, 62805, 62805, 62805, 62532, 62532, 62805, 62805, 62805, 62805, 62532, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 25395, 29764, 62805, 62805, 62532, 62532, 62259, 62259, 62259, 62532, 62532, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 37410, 9011, 58163, 62532, 62532, 62532, 62259, 61986, 61986, 61986, 62259, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 25122, 0, 37410, 61986, 62259, 62259, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 41506, 1092, 0, 4642, 41506, 57890, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 57890, 12834, 0, 0, 0, 0, 21026, 49698, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 53794, 546, 0, 0, 0, 0, 0, 4642, 29218, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 49698, 0, 0, 0, 0, 0, 0, 0, 8738, 57890, 61986, 61986, 61986, 61986, 61986, 61986, 61986, 57890, 41506, 16930, 0, 0, 0, 0, 0, 0, 0, 0, 21026, 57890, 61986, 61986, 61986, 61986, 62259, 53794, 21026, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21026, 57890, 61986, 61986, 53794, 21299, 4915, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25122, 61986, 53794, 12834, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4915, 16930, 4915, 0, 0, 0, 0, 0, 0, 0, 0, };
Sprites rock(16, rockPixels, rockOffsets, rockRes, rockPoints, rockPointOffsets);
