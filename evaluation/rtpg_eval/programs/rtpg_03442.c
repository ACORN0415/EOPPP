int test_func(void) {
    int v0 = 53;
    int v1 = 88;
    int v2 = 59;
    int v3 = 9;
    int v4 = 66;
    int v5 = 2;
    int v6 = 59;
    int v7 = 26;
    int i;
    v1 = v1 + v2;
    if (v6 > v5) { v6 = v5; }
    v4 = v4 - v7;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    int *__p = &v1;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
