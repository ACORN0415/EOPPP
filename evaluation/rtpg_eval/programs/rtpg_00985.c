int test_func(void) {
    int v0 = 67;
    int v1 = 76;
    int v2 = 7;
    int v3 = 42;
    int v4 = 62;
    int v5 = 26;
    int i;
    if (v2 > v0) { v2 = v0; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
