int test_func(void) {
    int v0 = 41;
    int v1 = 100;
    int v2 = 52;
    int v3 = 50;
    int v4 = 36;
    int v5 = 14;
    int v6 = 67;
    int i;
    v5 = v5 * 7;
    v2 = v2 - v4;
    if (v2 > v4) { v2 = v4; }
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    v2 = v2 % (v3 + 1);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
