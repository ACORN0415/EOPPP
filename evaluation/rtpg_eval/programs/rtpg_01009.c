int test_func(void) {
    int v0 = 30;
    int v1 = 83;
    int v2 = 3;
    int v3 = 11;
    int v4 = 4;
    int v5 = 63;
    int i;
    v0 = v0 - v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
