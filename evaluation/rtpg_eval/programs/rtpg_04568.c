int test_func(void) {
    int v0 = 26;
    int v1 = 4;
    int v2 = 96;
    int v3 = 35;
    int i;
    if (v3 > v1) { v3 = v1; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
