int test_func(void) {
    int v0 = 47;
    int v1 = 78;
    int v2 = 77;
    int v3 = 3;
    int v4 = 83;
    int i;
    v3 = v3 - v2;
    for (i = 0; i < 20; i++) {
        v1 = v1 + v3;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
