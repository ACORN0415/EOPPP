int __arr_7889[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 83;
    int v2 = 57;
    int v3 = 24;
    int v4 = 22;
    int v5 = 50;
    int v6 = 91;
    int i;
    v3 = v3 + v2;
    for (i = 0; i < 10; i++) { __arr_7889[i] = v2 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
