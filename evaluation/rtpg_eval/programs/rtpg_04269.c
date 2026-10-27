int test_func(void) {
    int v0 = 7;
    int v1 = 68;
    int v2 = 33;
    int v3 = 41;
    int v4 = 64;
    int v5 = 68;
    int v6 = 78;
    int i;
    v5 = 24;
    int *__p = &v3;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
