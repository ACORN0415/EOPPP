int test_func(void) {
    int v0 = 81;
    int v1 = 19;
    int v2 = 8;
    int v3 = 16;
    int v4 = 21;
    int v5 = 50;
    int v6 = 90;
    int i;
    for (i = 0; i < 18; i++) {
        v6 = v6 + v6;
    }
    v4 = 21;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
