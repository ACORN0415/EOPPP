int test_func(void) {
    int v0 = 60;
    int v1 = 78;
    int v2 = 81;
    int v3 = 26;
    int i;
    v3 = 62;
    for (i = 0; i < 13; i++) {
        v3 = v3 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
