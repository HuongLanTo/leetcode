/**
 * @param {string[]} words
 * @return {string[]}
 */
var commonChars = function(words) {
    let result = [];
    let minFrequency = new Array(26).fill(Infinity);
    
    for (let word of words) {
        let wordFrequency = new Array(26).fill(0);

        for (let c of word) {
            wordFrequency[c.charCodeAt(0) - 'a'.charCodeAt(0)]++;
        }

        for (let i = 0; i < 26; i++) {
            minFrequency[i] = Math.min(minFrequency[i], wordFrequency[i]);
        }
    }

    for (let i = 0; i < 26; i++) {
        while (minFrequency[i] > 0) {
            result.push(String.fromCharCode(i + 'a'.charCodeAt(0)));
            minFrequency[i]--;
        }
    }

    return result;
};