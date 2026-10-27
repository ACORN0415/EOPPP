int test_func(void) {
    int v0 = 68;
    int v1 = 47;
    int v2 = 86;
    int v3 = 85;
    int i;
    v3 = v3 + v3;
    if (v1 > v3) { v1 = v3; }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
