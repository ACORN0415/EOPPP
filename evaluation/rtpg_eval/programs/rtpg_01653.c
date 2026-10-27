int test_func(void) {
    int v0 = 97;
    int v1 = 93;
    int v2 = 73;
    int v3 = 69;
    int v4 = 48;
    int v5 = 79;
    int v6 = 74;
    int i;
    v6 = 66;
    v5 = v5 - v6;
    for (i = 0; i < 13; i++) {
        v0 = v0 + v3;
    }
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
