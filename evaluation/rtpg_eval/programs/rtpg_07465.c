int test_func(void) {
    int v0 = 34;
    int v1 = 54;
    int v2 = 47;
    int v3 = 19;
    int v4 = 81;
    int i;
    v3 = 47;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
