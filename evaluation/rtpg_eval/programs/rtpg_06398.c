int test_func(void) {
    int v0 = 91;
    int v1 = 76;
    int v2 = 54;
    int v3 = 78;
    int v4 = 71;
    int i;
    for (i = 0; i < 14; i++) {
        v3 = v3 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
