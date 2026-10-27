int test_func(void) {
    int v0 = 56;
    int v1 = 92;
    int v2 = 69;
    int v3 = 71;
    int v4 = 65;
    int v5 = 20;
    int v6 = 8;
    int v7 = 75;
    int i;
    if (v0 > v3) { v0 = v3; }
    v1 = v1 + v5;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
