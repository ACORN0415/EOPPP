int test_func(void) {
    int v0 = 86;
    int v1 = 2;
    int v2 = 56;
    int v3 = 62;
    int i;
    if (v0 > v2) { v0 = v2; }
    v3 = 19;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
