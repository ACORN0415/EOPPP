int test_func(void) {
    int v0 = 23;
    int v1 = 38;
    int v2 = 84;
    int v3 = 78;
    int v4 = 58;
    int v5 = 57;
    int v6 = 55;
    int i;
    v0 = v0 + v3;
    for (i = 0; i < 18; i++) {
        v0 = v0 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
