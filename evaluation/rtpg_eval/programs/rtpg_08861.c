int test_func(void) {
    int v0 = 92;
    int v1 = 85;
    int v2 = 21;
    int v3 = 57;
    int v4 = 21;
    int i;
    v2 = v2 + v1;
    if (v2 > v2) { v2 = v2; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
