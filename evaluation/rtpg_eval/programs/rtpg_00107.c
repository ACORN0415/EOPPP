int test_func(void) {
    int v0 = 65;
    int v1 = 79;
    int v2 = 55;
    int v3 = 49;
    int v4 = 91;
    int v5 = 23;
    int v6 = 46;
    int i;
    if (v0 > v2) { v0 = v2; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
