int __arr_6097[10];
int test_func(void) {
    int v0 = 38;
    int v1 = 20;
    int v2 = 97;
    int v3 = 35;
    int v4 = 30;
    int i;
    v2 = v2 + v3;
    for (i = 0; i < 10; i++) { __arr_6097[i] = v4 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
