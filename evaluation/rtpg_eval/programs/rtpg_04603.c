int test_func(void) {
    int v0 = 82;
    int v1 = 100;
    int v2 = 50;
    int v3 = 82;
    int v4 = 25;
    int v5 = 25;
    int v6 = 28;
    int i;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
