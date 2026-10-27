int test_func(void) {
    int v0 = 33;
    int v1 = 13;
    int v2 = 37;
    int v3 = 65;
    int v4 = 80;
    int v5 = 51;
    int v6 = 66;
    int v7 = 26;
    int i;
    if (v7 > v5) { v7 = v5; }
    v1 = v1 + v3;
    switch (v7) {
        case 0: v7 = 1; break;
        case 1: v7 = 2; break;
        default: v7 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v7 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
