int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 92;
    int v1 = 25;
    int v2 = 9;
    int i;
    v1 = v1 * 5;
    v0 = v0 - v1;
    v1 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
