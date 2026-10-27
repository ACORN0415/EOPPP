int test_func(void) {
    int v0 = 46;
    int v1 = 19;
    int v2 = 81;
    int v3 = 79;
    int v4 = 66;
    int v5 = 87;
    int v6 = 17;
    int i;
    v1 = 20;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
