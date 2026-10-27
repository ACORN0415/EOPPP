int __arr_8710[10];
int test_func(void) {
    int v0 = 12;
    int v1 = 87;
    int v2 = 94;
    int v3 = 78;
    int v4 = 56;
    int v5 = 70;
    int v6 = 14;
    int i;
    for (i = 0; i < 10; i++) { __arr_8710[i] = v0 + i; }
    v4 = v4 - v5;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
