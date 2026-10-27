int test_func(void) {
    int v0 = 85;
    int v1 = 43;
    int v2 = 74;
    int v3 = 26;
    int v4 = 74;
    int v5 = 23;
    int v6 = 85;
    int v7 = 68;
    int i;
    if (v4 > v1) { v4 = v1; }
    v6 = 47;
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    return v0;
}
int main(void) { return test_func(); }
