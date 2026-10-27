int test_func(void) {
    int v0 = 69;
    int v1 = 20;
    int v2 = 71;
    int v3 = 14;
    int v4 = 58;
    int i;
    v2 = v2 + v3;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v4;
    }
    v2 = v2 * 5;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
