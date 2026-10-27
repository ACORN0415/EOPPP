int test_func(void) {
    int v0 = 2;
    int v1 = 24;
    int v2 = 72;
    int v3 = 34;
    int v4 = 31;
    int i;
    v3 = v3 + v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
