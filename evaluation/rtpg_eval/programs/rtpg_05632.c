int test_func(void) {
    int v0 = 72;
    int v1 = 16;
    int v2 = 80;
    int v3 = 64;
    int i;
    for (i = 0; i < 19; i++) {
        v1 = v1 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
