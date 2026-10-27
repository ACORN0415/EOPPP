int test_func(void) {
    int v0 = 68;
    int v1 = 62;
    int v2 = 31;
    int v3 = 78;
    int v4 = 13;
    int v5 = 20;
    int v6 = 45;
    int v7 = 25;
    int i;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v7 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
