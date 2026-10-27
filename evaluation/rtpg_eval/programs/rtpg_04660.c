int test_func(void) {
    int v0 = 90;
    int v1 = 100;
    int v2 = 91;
    int v3 = 16;
    int i;
    v1 = v1 * 10;
    for (i = 0; i < 5; i++) {
        v2 = v2 + v3;
    }
    if (v2 > v0) { v2 = v0; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    v0 = v0 % (v3 + 1);
    return v0;
}
int main(void) { return test_func(); }
