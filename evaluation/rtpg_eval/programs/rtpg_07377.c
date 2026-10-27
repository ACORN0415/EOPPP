int test_func(void) {
    int v0 = 78;
    int v1 = 69;
    int v2 = 17;
    int v3 = 33;
    int v4 = 81;
    int v5 = 95;
    int v6 = 55;
    int v7 = 28;
    int i;
    v7 = 14;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
