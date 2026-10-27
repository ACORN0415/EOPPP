int __arr_7972[10];
int test_func(void) {
    int v0 = 79;
    int v1 = 1;
    int v2 = 81;
    int v3 = 42;
    int v4 = 10;
    int v5 = 67;
    int i;
    v0 = v0 * 8;
    v0 = v0 + v3;
    for (i = 0; i < 10; i++) { __arr_7972[i] = v5 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
