int __arr_6067[10];
int test_func(void) {
    int v0 = 63;
    int v1 = 71;
    int v2 = 82;
    int v3 = 69;
    int v4 = 5;
    int v5 = 37;
    int v6 = 21;
    int i;
    for (i = 0; i < 10; i++) { __arr_6067[i] = v4 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
