int test_func(void) {
    int v0 = 58;
    int v1 = 27;
    int v2 = 19;
    int v3 = 19;
    int v4 = 26;
    int v5 = 68;
    int i;
    v0 = v0 + v2;
    for (i = 0; i < 5; i++) {
        v2 = v2 + v1;
    }
    v2 = 78;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
