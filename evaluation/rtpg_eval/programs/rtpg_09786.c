int test_func(void) {
    int v0 = 85;
    int v1 = 65;
    int v2 = 96;
    int v3 = 65;
    int v4 = 78;
    int v5 = 8;
    int v6 = 88;
    int v7 = 9;
    int i;
    for (i = 0; i < 8; i++) {
        v3 = v3 + v7;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
