int __arr_7434[10];
int test_func(void) {
    int v0 = 68;
    int v1 = 36;
    int v2 = 31;
    int v3 = 100;
    int v4 = 94;
    int v5 = 94;
    int i;
    for (i = 0; i < 10; i++) { __arr_7434[i] = v1 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
