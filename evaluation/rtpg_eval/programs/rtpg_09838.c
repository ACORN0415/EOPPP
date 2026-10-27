int test_func(void) {
    int v0 = 29;
    int v1 = 48;
    int v2 = 46;
    int v3 = 63;
    int v4 = 92;
    int i;
    v0 = 69;
    for (i = 0; i < 8; i++) {
        v2 = v2 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
