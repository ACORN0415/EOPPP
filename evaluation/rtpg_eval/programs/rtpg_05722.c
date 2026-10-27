int test_func(void) {
    int v0 = 73;
    int v1 = 11;
    int v2 = 52;
    int v3 = 90;
    int v4 = 52;
    int v5 = 72;
    int v6 = 64;
    int i;
    v1 = 78;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
