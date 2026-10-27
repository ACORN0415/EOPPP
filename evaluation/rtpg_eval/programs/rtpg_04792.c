int test_func(void) {
    int v0 = 50;
    int v1 = 80;
    int v2 = 54;
    int v3 = 37;
    int v4 = 29;
    int v5 = 24;
    int v6 = 10;
    int i;
    v6 = 2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
