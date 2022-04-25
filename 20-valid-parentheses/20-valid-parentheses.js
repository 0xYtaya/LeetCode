const isOpen = (x) => x == '(' || x == '{' || x == '['
const isClose = (x) => x == ')' || x == '}' || x == ']'

const checkParentheses = (o , c) => {
    if (o == '(')
        return c == ')'
    if (o == '{')
        return c == '}'
    if (o == '[')
        return c == ']'
}

var isValid = function(s) {
    let arr = []
    for (i = 0; i< s.length ;i++)
    {
        if (isOpen(s[i]))
            arr.push(s[i])
        else if (isClose(s[i]) && arr.length >= 1)
        {
            if (checkParentheses(arr[arr.length - 1],s[i]))
                arr.pop()
            else
                return false;
        }
        else
            return false;
    }
    return arr.length == 0;
}