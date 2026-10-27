int test_func(void) {
    int v0 = 71;
    int v1 = 51;
    int v2 = 44;
    int v3 = 89;
    int v4 = 53;
    int v5 = 81;
    int i;
    if (v3 > v2) { v3 = v2; }
    v4 = v4 - v5;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
