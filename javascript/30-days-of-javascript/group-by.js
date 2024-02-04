/**
 * @param {Function} fn
 * @return {Object}
 */
Array.prototype.groupBy = function(fn) {
    let result = {};
    for (let i = 0; i < this.length; i++) {
        if (!result.hasOwnProperty(fn(this[i]))) {
            result[fn(this[i])] = [this[i]];
        } else {
            result[fn(this[i])].push(this[i]);
        }
    }
    return result;
};

/**
 * [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
 */