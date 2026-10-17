bool isPalindrome(char* s) {
    int st = 0;
    int end = strlen(s) - 1;

    while (st < end) {

        while (st < end && !isalnum((unsigned char)s[st]))
            st++;

        while (st < end && !isalnum((unsigned char)s[end]))
            end--;

        if (tolower((unsigned char)s[st]) !=
            tolower((unsigned char)s[end])) {
            return false;
        }

        st++;
        end--;
    }

    return true;
}