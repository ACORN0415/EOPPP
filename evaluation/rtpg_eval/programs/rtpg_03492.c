int test_func(void) {
    int v0 = 96;
    int v1 = 89;
    int v2 = 76;
    int v3 = 89;
    int v4 = 75;
    int i;
    v0 = v0 + v0;
    v0 = v0 - v4;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    v2 = v2 | v0;
    return v0;
}
int main(void) { return test_func(); }
