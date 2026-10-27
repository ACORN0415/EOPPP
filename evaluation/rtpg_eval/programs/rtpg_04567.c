int test_func(void) {
    int v0 = 40;
    int v1 = 86;
    int v2 = 85;
    int v3 = 4;
    int v4 = 4;
    int v5 = 15;
    int v6 = 60;
    int v7 = 50;
    int i;
    v2 = 70;
    for (i = 0; i < 18; i++) {
        v4 = v4 + v2;
    }
    v1 = v1 - v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v7 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
