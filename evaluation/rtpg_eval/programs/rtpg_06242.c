int test_func(void) {
    int v0 = 77;
    int v1 = 78;
    int v2 = 4;
    int v3 = 14;
    int v4 = 14;
    int v5 = 34;
    int v6 = 53;
    int v7 = 92;
    int i;
    v6 = 17;
    for (i = 0; i < 11; i++) {
        v1 = v1 + v3;
    }
    if (v4 > v4) { v4 = v4; }
    int *__p = &v5;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v7;
    return v0;
}
int main(void) { return test_func(); }
