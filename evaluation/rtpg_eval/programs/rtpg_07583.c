int __arr_7583[10];
int test_func(void) {
    int v0 = 76;
    int v1 = 42;
    int v2 = 26;
    int v3 = 23;
    int i;
    for (i = 0; i < 10; i++) { __arr_7583[i] = v2 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
