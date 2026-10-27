int test_func(void) {
    int v0 = 33;
    int v1 = 99;
    int v2 = 69;
    int v3 = 58;
    int i;
    v2 = 27;
    if (v2 > v2) { v2 = v2; }
    for (i = 0; i < 7; i++) {
        v1 = v1 + v3;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
