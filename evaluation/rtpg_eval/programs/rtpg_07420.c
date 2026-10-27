int test_func(void) {
    int v0 = 68;
    int v1 = 28;
    int v2 = 13;
    int v3 = 93;
    int v4 = 69;
    int v5 = 27;
    int v6 = 99;
    int v7 = 81;
    int i;
    for (i = 0; i < 10; i++) {
        v6 = v6 + v2;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
