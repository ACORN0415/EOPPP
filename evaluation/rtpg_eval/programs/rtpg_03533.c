int test_func(void) {
    int v0 = 29;
    int v1 = 10;
    int v2 = 47;
    int v3 = 50;
    int v4 = 77;
    int v5 = 96;
    int i;
    v5 = 60;
    v2 = v2 - v0;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
