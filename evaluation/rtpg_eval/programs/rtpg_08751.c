int __arr_8751[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 68;
    int v2 = 56;
    int v3 = 75;
    int v4 = 72;
    int v5 = 34;
    int i;
    v4 = 93;
    for (i = 0; i < 10; i++) { __arr_8751[i] = v5 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
