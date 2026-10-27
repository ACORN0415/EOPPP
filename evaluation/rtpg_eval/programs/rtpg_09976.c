int test_func(void) {
    int v0 = 18;
    int v1 = 18;
    int v2 = 13;
    int v3 = 83;
    int v4 = 78;
    int v5 = 38;
    int i;
    v0 = 90;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
