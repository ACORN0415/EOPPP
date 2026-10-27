int test_func(void) {
    int v0 = 91;
    int v1 = 10;
    int v2 = 21;
    int v3 = 21;
    int v4 = 52;
    int v5 = 13;
    int v6 = 51;
    int i;
    v0 = 23;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
