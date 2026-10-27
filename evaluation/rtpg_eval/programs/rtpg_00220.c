int test_func(void) {
    int v0 = 82;
    int v1 = 90;
    int v2 = 79;
    int v3 = 78;
    int v4 = 86;
    int i;
    v3 = v3 - v0;
    for (i = 0; i < 12; i++) {
        v1 = v1 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
