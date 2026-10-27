int __arr_3734[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 24;
    int v2 = 13;
    int i;
    for (i = 0; i < 10; i++) { __arr_3734[i] = v0 + i; }
    v0 = v0 * 7;
    v1 = 20;
    int *__p = &v2;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
