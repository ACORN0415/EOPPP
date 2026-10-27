int test_func(void) {
    int v0 = 28;
    int v1 = 52;
    int v2 = 21;
    int v3 = 70;
    int v4 = 47;
    int v5 = 51;
    int i;
    if (v0 > v3) { v0 = v3; }
    for (i = 0; i < 11; i++) {
        v0 = v0 + v5;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
