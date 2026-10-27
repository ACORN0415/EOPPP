int test_func(void) {
    int v0 = 60;
    int v1 = 84;
    int v2 = 63;
    int v3 = 21;
    int v4 = 25;
    int v5 = 22;
    int v6 = 97;
    int v7 = 25;
    int i;
    for (i = 0; i < 11; i++) {
        v4 = v4 + v6;
    }
    v0 = v0 * 6;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    v0 = v0 % (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
