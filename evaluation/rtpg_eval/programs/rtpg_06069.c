int test_func(void) {
    int v0 = 98;
    int v1 = 3;
    int v2 = 36;
    int v3 = 66;
    int i;
    for (i = 0; i < 8; i++) {
        v1 = v1 + v3;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    v0 = v0 ^ v3;
    return v0;
}
int main(void) { return test_func(); }
