int test_func(void) {
    int v0 = 99;
    int v1 = 55;
    int v2 = 60;
    int v3 = 85;
    int i;
    if (v1 > v2) { v1 = v2; }
    for (i = 0; i < 15; i++) {
        v1 = v1 + v3;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
