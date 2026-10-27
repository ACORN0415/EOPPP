int __arr_2206[10];
int test_func(void) {
    int v0 = 11;
    int v1 = 12;
    int v2 = 46;
    int v3 = 27;
    int v4 = 17;
    int v5 = 97;
    int i;
    for (i = 0; i < 10; i++) { __arr_2206[i] = v1 + i; }
    v1 = v1 * 3;
    int *__p = &v2;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
