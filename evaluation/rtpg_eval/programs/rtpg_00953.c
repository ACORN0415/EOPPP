int test_func(void) {
    int v0 = 19;
    int v1 = 73;
    int v2 = 82;
    int v3 = 4;
    int v4 = 86;
    int v5 = 23;
    int i;
    for (i = 0; i < 10; i++) {
        v1 = v1 + v2;
    }
    v1 = v1 + v0;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
