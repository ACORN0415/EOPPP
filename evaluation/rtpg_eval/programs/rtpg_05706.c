int test_func(void) {
    int v0 = 98;
    int v1 = 68;
    int v2 = 19;
    int v3 = 4;
    int v4 = 38;
    int v5 = 15;
    int i;
    v3 = 62;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
