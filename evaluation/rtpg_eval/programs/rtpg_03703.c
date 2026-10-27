int test_func(void) {
    int v0 = 15;
    int v1 = 37;
    int v2 = 66;
    int v3 = 72;
    int v4 = 67;
    int v5 = 22;
    int v6 = 85;
    int i;
    v3 = 36;
    for (i = 0; i < 6; i++) {
        v3 = v3 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
