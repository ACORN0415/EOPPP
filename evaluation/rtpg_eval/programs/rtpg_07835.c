int test_func(void) {
    int v0 = 64;
    int v1 = 14;
    int v2 = 86;
    int v3 = 50;
    int v4 = 91;
    int v5 = 36;
    int v6 = 76;
    int i;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
