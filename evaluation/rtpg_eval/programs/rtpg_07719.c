int test_func(void) {
    int v0 = 92;
    int v1 = 66;
    int v2 = 17;
    int v3 = 61;
    int v4 = 99;
    int v5 = 21;
    int i;
    for (i = 0; i < 11; i++) {
        v3 = v3 + v3;
    }
    if (v4 > v2) { v4 = v2; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
