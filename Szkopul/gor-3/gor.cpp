#include <iostream>

using namespace std;

int main() {
    short numTestCases;
    cin >> numTestCases;
    
    for (int i = 0; i < numTestCases; ++i) {
        long long budget, itemsForPromotion, freeItems, pricePerItem;
        cin >> budget >> itemsForPromotion >> freeItems >> pricePerItem;
        
        // budget - total budget available
        // itemsForPromotion - number of items needed to qualify for promotion
        // freeItems - number of free items received with each promotion
        // pricePerItem - cost of each clothing item
        
        // Calculate how many complete promotional sets can be purchased
        long long setsOfPromotionItems = budget / (itemsForPromotion * pricePerItem);
        
        // Calculate how many items purchased through promotions
        long long purchasedItems = setsOfPromotionItems * itemsForPromotion;
        
        // Calculate remaining items that can be bought with leftover budget
        long long remainderItems = (budget % (itemsForPromotion * pricePerItem)) / pricePerItem;
        
        // Calculate free items earned from promotions
        long long freeItemsEarned = setsOfPromotionItems * freeItems;
        
        // Calculate total clothes obtained
        long long totalClothes = purchasedItems + freeItemsEarned + remainderItems;
        
        cout << totalClothes << endl;
    }

    return 0;
}