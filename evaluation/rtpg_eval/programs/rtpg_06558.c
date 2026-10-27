int test_func(void) {
    int v0 = 95;
    int v1 = 82;
    int v2 = 13;
    int v3 = 89;
    int v4 = 4;
    int v5 = 41;
    int v6 = 48;
    int i;
    v5 = v5 + v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
