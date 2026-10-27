int test_func(void) {
    int v0 = 100;
    int v1 = 7;
    int v2 = 10;
    int v3 = 66;
    int v4 = 32;
    int v5 = 64;
    int v6 = 62;
    int v7 = 1;
    int i;
    for (i = 0; i < 19; i++) {
        v0 = v0 + v7;
    }
    v7 = v7 * 8;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
