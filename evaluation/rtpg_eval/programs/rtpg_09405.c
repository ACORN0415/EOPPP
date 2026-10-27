int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 23;
    int v1 = 20;
    int v2 = 4;
    int i;
    if (v1 > v0) { v1 = v0; }
    for (i = 0; i < 10; i++) {
        v1 = v1 + v2;
    }
    v2 = __arr_didx[__idx_didx[0]];
    v0 = v0 ^ v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
