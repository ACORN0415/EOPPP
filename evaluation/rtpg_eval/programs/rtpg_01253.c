int test_func(void) {
    int v0 = 64;
    int v1 = 73;
    int v2 = 32;
    int v3 = 52;
    int v4 = 80;
    int i;
    for (i = 0; i < 13; i++) {
        v0 = v0 + v0;
    }
    v3 = 52;
    return v0;
}
int main(void) { return test_func(); }
