int test_func(void) {
    int v0 = 46;
    int v1 = 6;
    int v2 = 71;
    int v3 = 14;
    int v4 = 62;
    int v5 = 24;
    int v6 = 93;
    int v7 = 6;
    int i;
    v7 = v7 * 2;
    for (i = 0; i < 15; i++) {
        v4 = v4 + v2;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v7 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
