int test_func(void) {
    int v0 = 47;
    int v1 = 15;
    int v2 = 88;
    int v3 = 88;
    int v4 = 21;
    int v5 = 68;
    int i;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
