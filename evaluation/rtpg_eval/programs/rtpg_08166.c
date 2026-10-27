int test_func(void) {
    int v0 = 66;
    int v1 = 36;
    int v2 = 63;
    int v3 = 79;
    int i;
    for (i = 0; i < 8; i++) {
        v2 = v2 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
