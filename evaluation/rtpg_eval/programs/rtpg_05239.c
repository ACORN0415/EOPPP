int test_func(void) {
    int v0 = 32;
    int v1 = 27;
    int v2 = 86;
    int v3 = 47;
    int v4 = 18;
    int v5 = 32;
    int v6 = 67;
    int i;
    v4 = v4 + v1;
    v5 = 60;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
