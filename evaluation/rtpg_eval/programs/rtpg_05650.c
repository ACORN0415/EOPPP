int __arr_5650[10];
int test_func(void) {
    int v0 = 100;
    int v1 = 64;
    int v2 = 73;
    int v3 = 96;
    int v4 = 0;
    int v5 = 13;
    int v6 = 6;
    int i;
    v1 = v1 - v4;
    for (i = 0; i < 10; i++) { __arr_5650[i] = v4 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
