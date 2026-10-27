int __arr_3452[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 79;
    int v1 = 26;
    int v2 = 59;
    int v3 = 73;
    int i;
    v3 = 23;
    for (i = 0; i < 10; i++) { __arr_3452[i] = v0 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
