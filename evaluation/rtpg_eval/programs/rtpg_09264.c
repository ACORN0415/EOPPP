int test_func(void) {
    int v0 = 49;
    int v1 = 72;
    int v2 = 93;
    int v3 = 95;
    int v4 = 33;
    int i;
    v0 = v0 - v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    int *__p = &v1;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
