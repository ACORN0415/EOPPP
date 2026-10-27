int test_func(void) {
    int v0 = 78;
    int v1 = 67;
    int v2 = 50;
    int v3 = 59;
    int i;
    if (v2 > v3) { v2 = v3; }
    v2 = 74;
    v0 = v0 * 10;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
