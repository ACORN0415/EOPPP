int test_func(void) {
    int v0 = 71;
    int v1 = 22;
    int v2 = 32;
    int v3 = 14;
    int v4 = 42;
    int v5 = 56;
    int v6 = 14;
    int i;
    for (i = 0; i < 14; i++) {
        v0 = v0 + v3;
    }
    v5 = v5 - v1;
    v1 = 42;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
