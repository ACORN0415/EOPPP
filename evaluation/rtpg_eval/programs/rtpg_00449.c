int __arr_449[10];
int test_func(void) {
    int v0 = 77;
    int v1 = 66;
    int v2 = 97;
    int v3 = 67;
    int i;
    if (v3 > v2) { v3 = v2; }
    for (i = 0; i < 10; i++) { __arr_449[i] = v2 + i; }
    v1 = v1 + v3;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
