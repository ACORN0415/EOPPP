int test_func(void) {
    int v0 = 87;
    int v1 = 32;
    int v2 = 51;
    int v3 = 91;
    int v4 = 14;
    int v5 = 30;
    int v6 = 5;
    int v7 = 70;
    int i;
    v1 = 89;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
