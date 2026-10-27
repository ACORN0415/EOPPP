int __arr_9446[10];
int test_func(void) {
    int v0 = 0;
    int v1 = 24;
    int v2 = 48;
    int v3 = 8;
    int v4 = 5;
    int v5 = 96;
    int v6 = 77;
    int v7 = 48;
    int i;
    v0 = v0 - v7;
    for (i = 0; i < 10; i++) { __arr_9446[i] = v0 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
