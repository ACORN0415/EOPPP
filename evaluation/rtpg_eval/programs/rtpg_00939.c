int test_func(void) {
    int v0 = 100;
    int v1 = 100;
    int v2 = 3;
    int v3 = 43;
    int v4 = 72;
    int v5 = 75;
    int v6 = 42;
    int i;
    v6 = v6 + v0;
    for (i = 0; i < 15; i++) {
        v4 = v4 + v2;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
