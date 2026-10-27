int test_func(void) {
    int v0 = 38;
    int v1 = 47;
    int v2 = 18;
    int v3 = 60;
    int v4 = 12;
    int v5 = 55;
    int v6 = 83;
    int v7 = 45;
    int i;
    for (i = 0; i < 15; i++) {
        v3 = v3 + v4;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
