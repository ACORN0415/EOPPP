int __arr_7636[10];
int test_func(void) {
    int v0 = 46;
    int v1 = 81;
    int v2 = 77;
    int v3 = 34;
    int v4 = 82;
    int v5 = 8;
    int v6 = 11;
    int i;
    v1 = v1 - v2;
    v4 = v4 + v6;
    for (i = 0; i < 10; i++) { __arr_7636[i] = v3 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    return v0;
}
int main(void) { return test_func(); }
