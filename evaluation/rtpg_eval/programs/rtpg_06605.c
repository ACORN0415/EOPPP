int test_func(void) {
    int v0 = 100;
    int v1 = 96;
    int v2 = 40;
    int v3 = 45;
    int v4 = 14;
    int v5 = 85;
    int i;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
