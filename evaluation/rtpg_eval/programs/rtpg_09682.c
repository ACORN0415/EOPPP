int test_func(void) {
    int v0 = 32;
    int v1 = 57;
    int v2 = 2;
    int v3 = 59;
    int i;
    v1 = 7;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
