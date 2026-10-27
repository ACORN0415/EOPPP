int test_func(void) {
    int v0 = 99;
    int v1 = 89;
    int v2 = 15;
    int v3 = 90;
    int v4 = 38;
    int v5 = 11;
    int v6 = 53;
    int v7 = 9;
    int i;
    v0 = v0 * 5;
    v4 = v4 | v7;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
