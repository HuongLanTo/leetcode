var isPalindrome = function(s) {
    s = s.toLowerCase();
    let begin = 0;
    let end = s.length - 1;
    while (begin < end) {
        if (!s.charAt(begin).match(/^[0-9a-z]+$/)) {
            begin++;
        } else if (!s.charAt(end).match(/^[0-9a-z]+$/)) {
            end--;
        } else {
            if (s.charAt(begin) !== s.charAt(end)) {
                return false;
            }
            begin++;
            end--;
        }
    } 
    return true;
};