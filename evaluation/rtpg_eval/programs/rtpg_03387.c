int test_func(void) {
    int v0 = 28;
    int v1 = 71;
    int v2 = 100;
    int v3 = 44;
    int v4 = 50;
    int v5 = 71;
    int v6 = 11;
    int v7 = 12;
    int i;
    v7 = 95;
    v4 = v4 + v3;
    for (i = 0; i < 13; i++) {
        v5 = v5 + v6;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
