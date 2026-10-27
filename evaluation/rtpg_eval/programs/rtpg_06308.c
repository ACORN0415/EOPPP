int __arr_6308[10];
int test_func(void) {
    int v0 = 71;
    int v1 = 36;
    int v2 = 12;
    int v3 = 64;
    int i;
    v2 = v2 + v3;
    for (i = 0; i < 10; i++) { __arr_6308[i] = v0 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
