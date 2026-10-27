int test_func(void) {
    int v0 = 13;
    int v1 = 1;
    int v2 = 98;
    int v3 = 44;
    int v4 = 23;
    int i;
    v0 = 66;
    for (i = 0; i < 12; i++) {
        v1 = v1 + v1;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
