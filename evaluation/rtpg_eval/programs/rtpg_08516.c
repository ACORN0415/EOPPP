int __arr_8516[10];
int test_func(void) {
    int v0 = 49;
    int v1 = 98;
    int v2 = 88;
    int v3 = 17;
    int i;
    for (i = 0; i < 10; i++) { __arr_8516[i] = v2 + i; }
    for (i = 0; i < 9; i++) {
        v3 = v3 + v2;
    }
    v2 = v2 / (v0 + 1);
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
