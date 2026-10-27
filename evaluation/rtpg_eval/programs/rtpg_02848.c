int __arr_2848[10];
int test_func(void) {
    int v0 = 54;
    int v1 = 35;
    int v2 = 39;
    int v3 = 50;
    int v4 = 53;
    int i;
    for (i = 0; i < 10; i++) { __arr_2848[i] = v2 + i; }
    v1 = v1 - v2;
    if (v4 > v0) { v4 = v0; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
