int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 41;
    int v1 = 80;
    int v2 = 60;
    int v3 = 12;
    int v4 = 51;
    int v5 = 1;
    int v6 = 94;
    int i;
    v3 = v3 + v4;
    v0 = 0;
    v0 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
