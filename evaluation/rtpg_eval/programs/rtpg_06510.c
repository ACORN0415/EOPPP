int test_func(void) {
    int v0 = 49;
    int v1 = 21;
    int v2 = 48;
    int v3 = 2;
    int v4 = 59;
    int v5 = 65;
    int i;
    v5 = v5 * 5;
    v5 = v5 + v4;
    v2 = v2 - v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
