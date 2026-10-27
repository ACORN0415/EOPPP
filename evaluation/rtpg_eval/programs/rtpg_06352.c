int test_func(void) {
    int v0 = 9;
    int v1 = 60;
    int v2 = 29;
    int v3 = 61;
    int v4 = 4;
    int v5 = 65;
    int v6 = 46;
    int v7 = 3;
    int i;
    v1 = v1 - v3;
    for (i = 0; i < 11; i++) {
        v3 = v3 + v1;
    }
    v6 = v6 + v3;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v5 = v5 & v6;
    return v0;
}
int main(void) { return test_func(); }
