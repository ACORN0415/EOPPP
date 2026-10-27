int __arr_4117[10];
int test_func(void) {
    int v0 = 57;
    int v1 = 26;
    int v2 = 30;
    int v3 = 11;
    int v4 = 73;
    int v5 = 2;
    int i;
    v4 = v4 * 7;
    for (i = 0; i < 10; i++) { __arr_4117[i] = v0 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
