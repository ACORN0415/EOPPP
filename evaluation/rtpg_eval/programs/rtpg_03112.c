int test_func(void) {
    int v0 = 49;
    int v1 = 10;
    int v2 = 72;
    int v3 = 14;
    int v4 = 1;
    int v5 = 87;
    int v6 = 75;
    int i;
    v6 = 41;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
