int test_func(void) {
    int v0 = 27;
    int v1 = 63;
    int v2 = 4;
    int v3 = 3;
    int v4 = 81;
    int v5 = 67;
    int i;
    if (v1 > v4) { v1 = v4; }
    v4 = v4 - v2;
    int *__p = &v4;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
