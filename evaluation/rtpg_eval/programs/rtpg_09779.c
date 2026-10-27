int test_func(void) {
    int v0 = 74;
    int v1 = 100;
    int v2 = 82;
    int v3 = 78;
    int v4 = 57;
    int i;
    for (i = 0; i < 19; i++) {
        v3 = v3 + v0;
    }
    v0 = 33;
    v3 = v3 - v0;
    return v0;
}
int main(void) { return test_func(); }
