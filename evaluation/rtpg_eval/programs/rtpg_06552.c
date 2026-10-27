int __arr_6552[10];
int test_func(void) {
    int v0 = 93;
    int v1 = 15;
    int v2 = 3;
    int v3 = 7;
    int v4 = 93;
    int i;
    for (i = 0; i < 10; i++) { __arr_6552[i] = v0 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    v3 = v3 % (v4 + 1);
    return v0;
}
int main(void) { return test_func(); }
