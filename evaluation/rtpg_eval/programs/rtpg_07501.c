int test_func(void) {
    int v0 = 7;
    int v1 = 59;
    int v2 = 72;
    int v3 = 48;
    int v4 = 86;
    int i;
    for (i = 0; i < 11; i++) {
        v4 = v4 + v1;
    }
    v1 = 29;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
