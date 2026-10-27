int test_func(void) {
    int v0 = 88;
    int v1 = 91;
    int v2 = 49;
    int v3 = 31;
    int v4 = 56;
    int v5 = 54;
    int v6 = 92;
    int v7 = 98;
    int i;
    for (i = 0; i < 7; i++) {
        v2 = v2 + v3;
    }
    v6 = v6 + v6;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
