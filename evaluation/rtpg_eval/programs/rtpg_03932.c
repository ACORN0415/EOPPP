int test_func(void) {
    int v0 = 72;
    int v1 = 13;
    int v2 = 11;
    int v3 = 8;
    int v4 = 40;
    int i;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v3;
    }
    v1 = 45;
    return v0;
}
int main(void) { return test_func(); }
