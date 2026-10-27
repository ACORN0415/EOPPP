int test_func(void) {
    int v0 = 63;
    int v1 = 44;
    int v2 = 45;
    int v3 = 29;
    int v4 = 65;
    int v5 = 64;
    int v6 = 12;
    int i;
    if (v6 > v6) { v6 = v6; }
    v4 = v4 + v1;
    v5 = 37;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
