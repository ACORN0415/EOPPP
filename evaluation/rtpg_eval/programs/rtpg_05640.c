int test_func(void) {
    int v0 = 47;
    int v1 = 94;
    int v2 = 67;
    int v3 = 19;
    int i;
    if (v1 > v2) { v1 = v2; }
    for (i = 0; i < 6; i++) {
        v0 = v0 + v2;
    }
    v3 = v3 - v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
