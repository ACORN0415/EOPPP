int test_func(void) {
    int v0 = 36;
    int v1 = 42;
    int v2 = 84;
    int i;
    v0 = v0 * 8;
    v1 = v1 + v0;
    if (v0 > v2) { v0 = v2; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    int *__p = &v0;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
