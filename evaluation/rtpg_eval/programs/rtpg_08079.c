int test_func(void) {
    int v0 = 28;
    int v1 = 81;
    int v2 = 100;
    int v3 = 49;
    int i;
    v1 = v1 * 3;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v0;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    v0 = v0 / (v3 + 1);
    return v0;
}
int main(void) { return test_func(); }
