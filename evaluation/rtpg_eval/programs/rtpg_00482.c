int test_func(void) {
    int v0 = 43;
    int v1 = 9;
    int v2 = 39;
    int v3 = 47;
    int v4 = 91;
    int v5 = 8;
    int v6 = 32;
    int i;
    if (v0 > v1) { v0 = v1; }
    v5 = v5 - v6;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
