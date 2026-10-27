int test_func(void) {
    int v0 = 71;
    int v1 = 79;
    int v2 = 9;
    int v3 = 47;
    int v4 = 100;
    int i;
    v2 = v2 + v3;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
