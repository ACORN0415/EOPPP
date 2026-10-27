int test_func(void) {
    int v0 = 65;
    int v1 = 59;
    int v2 = 52;
    int v3 = 85;
    int v4 = 73;
    int v5 = 92;
    int i;
    v0 = 75;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v2;
    }
    v2 = v2 / (v3 + 1);
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
