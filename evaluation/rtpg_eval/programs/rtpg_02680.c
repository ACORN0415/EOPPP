int test_func(void) {
    int v0 = 42;
    int v1 = 5;
    int v2 = 8;
    int v3 = 35;
    int v4 = 27;
    int v5 = 16;
    int i;
    v3 = v3 * 4;
    if (v4 > v5) { v4 = v5; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
