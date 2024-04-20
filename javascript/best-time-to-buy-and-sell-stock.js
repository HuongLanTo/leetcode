/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    if (prices.length < 2) {
        return 0;
    }
    let profit = 0;
    let buyPrice = prices[0];
    for (let i = 1; i < prices.length; i++) {
        if (prices[i] < buyPrice) {
            buyPrice = prices[i];
        } else {
            profit = Math.max(profit, prices[i] - buyPrice);
        }
    }
    return profit;
};