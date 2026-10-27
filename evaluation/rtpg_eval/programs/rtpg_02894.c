int __arr_2894[10];
int test_func(void) {
    int v0 = 13;
    int v1 = 68;
    int v2 = 89;
    int v3 = 82;
    int v4 = 40;
    int v5 = 80;
    int v6 = 83;
    int i;
    for (i = 0; i < 10; i++) { __arr_2894[i] = v3 + i; }
    v5 = 27;
    for (i = 0; i < 10; i++) {
        v4 = v4 + v4;
    }
    v4 = v4 % (v3 + 1);
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
