int test_func(void) {
    int v0 = 94;
    int v1 = 80;
    int v2 = 0;
    int v3 = 44;
    int i;
    if (v2 > v3) { v2 = v3; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
