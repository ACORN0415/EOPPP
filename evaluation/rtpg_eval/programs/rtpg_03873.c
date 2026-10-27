int test_func(void) {
    int v0 = 38;
    int v1 = 59;
    int v2 = 20;
    int v3 = 18;
    int v4 = 57;
    int v5 = 1;
    int v6 = 9;
    int v7 = 27;
    int i;
    v1 = v1 - v4;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
