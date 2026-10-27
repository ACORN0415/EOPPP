int test_func(void) {
    int v0 = 90;
    int v1 = 100;
    int v2 = 10;
    int v3 = 54;
    int v4 = 5;
    int v5 = 17;
    int i;
    if (v5 > v2) { v5 = v2; }
    for (i = 0; i < 13; i++) {
        v5 = v5 + v2;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
