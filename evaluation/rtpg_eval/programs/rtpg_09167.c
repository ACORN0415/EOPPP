int test_func(void) {
    int v0 = 10;
    int v1 = 86;
    int v2 = 52;
    int v3 = 34;
    int v4 = 2;
    int i;
    v4 = v4 - v3;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
