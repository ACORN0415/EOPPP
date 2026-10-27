int test_func(void) {
    int v0 = 28;
    int v1 = 14;
    int v2 = 45;
    int v3 = 90;
    int v4 = 44;
    int i;
    v2 = v2 - v3;
    for (i = 0; i < 17; i++) {
        v1 = v1 + v2;
    }
    v2 = v2 + v3;
    return v0;
}
int main(void) { return test_func(); }
