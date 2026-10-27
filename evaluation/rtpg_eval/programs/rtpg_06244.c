int test_func(void) {
    int v0 = 68;
    int v1 = 90;
    int v2 = 71;
    int v3 = 36;
    int v4 = 100;
    int v5 = 55;
    int i;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
