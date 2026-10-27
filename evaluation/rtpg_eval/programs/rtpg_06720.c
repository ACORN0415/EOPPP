int test_func(void) {
    int v0 = 19;
    int v1 = 9;
    int v2 = 49;
    int v3 = 70;
    int v4 = 55;
    int v5 = 15;
    int i;
    v0 = v0 - v3;
    for (i = 0; i < 6; i++) {
        v1 = v1 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
