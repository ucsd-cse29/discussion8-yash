#include <stdio.h>

// TODO: return the index of the block that will be selected while also updating the freeBlocks array
int bestFit(int freeBlocks[], int numBlocks, int alloc_size) {
    
}

//Implement Best Fit
void printBlocks(int freeBlocks[]) {
    printf("FREE BLOCKS: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", freeBlocks[i]);
    }
    printf("\n");
    return;
}

int main() {
    int freeBlocks[] = {600, 100, 500, 200, 300};

    int allocations[] = {232, 417, 110, 440, 80};
    //Pre-allocations
    printBlocks(freeBlocks);
    for (int i = 0; i < 5; i++) {
        printf("Allocation of size %d placed at block %d\n", allocations[i], bestFit(freeBlocks, 5, allocations[i]));
        printBlocks(freeBlocks);
    }
    //POST Allocations
    return 0;
}