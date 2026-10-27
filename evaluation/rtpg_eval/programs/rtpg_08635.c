int test_func(void) {
    int v0 = 22;
    int v1 = 27;
    int v2 = 32;
    int v3 = 19;
    int v4 = 84;
    int v5 = 49;
    int v6 = 72;
    int i;
    for (i = 0; i < 8; i++) {
        v5 = v5 + v1;
    }
    v0 = v0 - v2;
    return v0;
}
int main(void) { return test_func(); }
